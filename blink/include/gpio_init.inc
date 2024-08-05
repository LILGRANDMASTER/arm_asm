port_c_init:

	push {r0, r1}			@ Сохраняем регистры в стек
	

	ldr r1, =RCC_CFGR		@ Загружаем адрес configure регистра в регистр r1
	ldr r0, =0x5000000		@ HSI clock selected
	str r0, [r1]			@ Записываем из r0 по адресу r1

	
	ldr r1, =RCC_APB2ENR	@ Загружаем адрес peripheral clock enable в r1
	ldr r0, =0x00000010		@ Активируем порт C
	str r0, [r1]			@ Записываем из r0 по адресу r1

	
	pop {r0, r1}			@ Восстанавливаем регистры из стека
	
	bx  lr					@ Возвращаемся из функции


	
