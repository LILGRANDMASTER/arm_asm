led_init:
	push {r0, r1}

	ldr r1, =GPIOC_CRH			@ Загружаем адрес GPIOC_CRH в r1
	ldr r0, [r1]				@ Загружаем значение GPIOC_CRH в r0

	and r0, r0, 0xFF0FFFFF		@ Обнуляем биты 23:20
	orr r0, r0, 0x200000		@ Записываем в бит 21 единицу
	
	str r0, [r1]				@ Сохраняем значение по адресу GPIOC_CRH

	pop {r0, r1}

	bx lr


led_flash:
	push {r0, r1}				

	ldr r1, =GPIOC_ODR			@ Загружаем адрес GPIOC_ODR в r1
	ldr r0, [r1]				@ Загружаем значение GPIOC_ODR в r0
	
	eor r0, 0x2000				@ Исключающее ИЛИ r0 = r0 eor 0x2000 на 13 бит
	
	str r0, [r1]				@ Записываем результат по адресу GPIOC_ODR
	
	pop {r0, r1}
	
	bx lr	
