.thumb									@ Тип инструкций thumb для cortex-m МК
.syntax unified							@ Вид синтакциса unified для thumb

.equ STACKINIT, 0x20005000				@ Адрес вершины стека

.text
										@ Далее идет вектор прерываний RM ст.193
SP:				.word STACKINIT			@ Указатель на вершину стека
RESET:			.word main				@ При Reset переход на main
NMI:			.word nmi_fault			@ Nonmaskable interrupt
HARD_FAULT:		.word hard_fault		@ All class of fault
MEMORY_FAULT:	.word memory_fault		@ Memory management
BUS_FAULT:		.word bus_fault			@ Prefetch fault, memory access fault
USAGE_FAULT:	.word usage_fault + 1	@ Undefined instruction or illigal state

.include "../include/memory_map.inc"	@ Подключение карты регистров
.include "../include/gpio_init.inc"		@ Инициализация порта C
.include "../include/led.inc"			@ Инициализация светодиода и функция моргания

main:
	push {lr}							@
	bl port_c_init						@ Вызов инициализации порта C
	bl led_init							@ Вызов инициализации светодиода
	pop  {lr}							@

_main_loop:								@ Вечный цикл
	push {lr}
	bl led_flash						@ Мигаем светодиодом
	bl wait								@ Вызов функции ожидания
	pop  {lr}

	b _main_loop						

	bx lr								@ Выход из функции main (просто чтоб был)


wait:
	push {r0}

	ldr r0, =0x11110					@ Записываем в r0 константу

_wait_loop:
	subs r0, r0, 1						@ r0 - 1, если =0 то выставляется zero flag
	bne  _wait_loop						@ Если не выставлен zero flag переходим

	
	pop {r0}
	bx   lr								@ Выход из функции


nmi_fault:
	@ breakpoint
	bkpt
	bx lr
	
hard_fault:
	@ breakpoint
	bkpt
	bx lr

memory_fault:
	@ breakpoint
	bkpt
	bx lr

bus_fault:
	@ breakpoint
	bkpt
	bx lr

usage_fault:
	@ breakpoint
	bkpt
	bx lr	


.end
