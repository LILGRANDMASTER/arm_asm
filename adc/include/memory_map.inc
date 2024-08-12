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

