@Определение переферии

.equ PORT_A,	0x40010800
.equ PORT_B,	0x40010C00
.equ PORT_C,    0x40011000
.equ PORT_D,	0x40011400 
.equ PORT_E,	0x40011800     
.equ RCC,       0x40021000
.equ ADC1,		0x40012400
.equ ADC2,		0x40012800

@Определение регистров

.equ RCC_RC,        RCC             @ Clock control register
.equ RCC_CFGR,      RCC + 0x04      @ Clock configuration register
.equ RCC_CIR,       RCC + 0x08      @ Clock interrupt register
.equ RCC_APB2RSTR,  RCC + 0x0C      @ APB2 peripheral reset register
.equ RCC_APB1RSTR,  RCC + 0x10      @ APB1 peripheral reset register
.equ RCC_AHBENR,    RCC + 0x14      @ AHB peripheral clock enable reg
.equ RCC_APB2ENR,   RCC + 0x18      @ APB2 peripheral clock enable reg
.equ RCC_APB1ENR,   RCC + 0x1C      @ APB1 peripheral clock enable reg
.equ RCC_BDCR,      RCC + 0x20      @ Backup domain control reg
.equ RCC_CSR,       RCC + 0x24      @ Control/status register

.equ GPIOC_CRL,		PORT_C			@ Port configuration register low
.equ GPIOC_CRH,		PORT_C + 0x04   @ Port configuration register high
.equ GPIOC_IDR,		PORT_C + 0x08	@ Port input data register
.equ GPIOC_ODR,		PORT_C + 0x0C	@ Port output data register
.equ GPIOC_BSRR,	PORT_C + 0x10	@ Port output data register
.equ GPIOC_BRR,		PORT_C + 0x14	@ Port bit reset register
.equ GPIOC_LCKR,	PORT_C + 0x18	@ Port configuration lock register

.equ GPIOA_CRL,		PORT_A          @ Port configuration register low
.equ GPIOA_CRH,		PORT_A + 0x04   @ Port configuration register high
.equ GPIOA_IDR,		PORT_A + 0x08	@ Port input data register
.equ GPIOA_ODR,		PORT_A + 0x0C	@ Port output data register
.equ GPIOA_BSRR,	PORT_A + 0x10	@ Port output data register
.equ GPIOA_BRR,		PORT_A + 0x14	@ Port bit reset register
.equ GPIOA_LCKR,	PORT_A + 0x18	@ Port configuration lock register

.equ ADC1_SR,		ADC1			@ ADC status register
.equ ADC1_CR1,		ADC1 + 0x04		@ ADC control register 1
.equ ADC1_CR2,		ADC1 + 0x08		@ ADC control register 2
.equ ADC1_SMPR1,	ADC1 + 0x0C		@ ADC sample time register 1
.equ ADC1_SMPR2,	ADC1 + 0x10		@ ADC sample time register 2
.equ ADC1_JOFR1,	ADC1 + 0x14		@ ADC injected channel data offset register 1
.equ ADC1_JOFR2,	ADC1 + 0x18		@ ADC injected channel data offset register 2
.equ ADC1_JOFR3,	ADC1 + 0x1C		@ ADC injected channel data offset register 3
.equ ADC1_JOFR4,	ADC1 + 0x20		@ ADC injected channel data offset register 4
.equ ADC1_HTR,		ADC1 + 0x24		@ ADC watchdog high threshold register
.equ ADC1_LTR,		ADC1 + 0x28		@ ADC watchdog low threshold register
.equ ADC1_SQR1,		ADC1 + 0x2C		@ ADC regular sequence register 1
.equ ADC1_SQR2,		ADC1 + 0x30		@ ADC regular sequence register 2
.equ ADC1_SQR3,		ADC1 + 0x34		@ ADC regular sequence register 3
.equ ADC1_JSQR,		ADC1 + 0x38		@ ADC injected sequence register
.equ ADC1_JDR1,		ADC1 + 0x3C		@ ADC injected data register 1
.equ ADC1_JDR2,		ADC1 + 0x40		@ ADC injected data register 2
.equ ADC1_JDR3,		ADC1 + 0x44		@ ADC injected data register 3
.equ ADC1_JDR4,		ADC1 + 0x48		@ ADC injected data register 4
.equ ADC1_DR,		ADC1 + 0x4C		@ ADC regular data register

.equ ADC2_SR,		ADC2			@ ADC status register
.equ ADC2_CR1,		ADC2 + 0x04		@ ADC control register 1
.equ ADC2_CR2,		ADC2 + 0x08		@ ADC control register 2
.equ ADC2_SMPR1,	ADC2 + 0x0C		@ ADC sample time register 1
.equ ADC2_SMPR2,	ADC2 + 0x10		@ ADC sample time register 2
.equ ADC2_JOFR1,	ADC2 + 0x14		@ ADC injected channel data offset register 1
.equ ADC2_JOFR2,	ADC2 + 0x18		@ ADC injected channel data offset register 2
.equ ADC2_JOFR3,	ADC2 + 0x1C		@ ADC injected channel data offset register 3
.equ ADC2_JOFR4,	ADC2 + 0x20		@ ADC injected channel data offset register 4
.equ ADC2_HTR,		ADC2 + 0x24		@ ADC watchdog high threshold register
.equ ADC2_LTR,		ADC2 + 0x28		@ ADC watchdog low threshold register
.equ ADC2_SQR1,		ADC2 + 0x2C		@ ADC regular sequence register 1
.equ ADC2_SQR2,		ADC2 + 0x30		@ ADC regular sequence register 2
.equ ADC2_SQR3,		ADC2 + 0x34		@ ADC regular sequence register 3
.equ ADC2_JSQR,		ADC2 + 0x38		@ ADC injected sequence register
.equ ADC2_JDR1,		ADC2 + 0x3C		@ ADC injected data register 1
.equ ADC2_JDR2,		ADC2 + 0x40		@ ADC injected data register 2
.equ ADC2_JDR3,		ADC2 + 0x44		@ ADC injected data register 3
.equ ADC2_JDR4,		ADC2 + 0x48		@ ADC injected data register 4
.equ ADC2_DR,		ADC2 + 0x4C		@ ADC regular data register





