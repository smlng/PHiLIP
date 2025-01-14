/*
 * port.h
 *
 *  Created on: Jul 18, 2018
 *      Author: kevinweiss
 */

#ifndef PORT_H_
#define PORT_H_

#ifdef BLUEPILL
#define LED0_Pin GPIO_PIN_13
#define LED0_GPIO_Port GPIOC
#define DEBUG0_Pin GPIO_PIN_0
#define DEBUG0_GPIO_Port GPIOA
#define DEBUG1_Pin GPIO_PIN_1
#define DEBUG1_GPIO_Port GPIOA
#define DEBUG2_Pin GPIO_PIN_2
#define DEBUG2_GPIO_Port GPIOA
#define TEST_PASS_Pin GPIO_PIN_3
#define TEST_PASS_GPIO_Port GPIOA
#define TEST_WARN_Pin GPIO_PIN_4
#define TEST_WARN_GPIO_Port GPIOA
#define TEST_FAIL_Pin GPIO_PIN_5
#define TEST_FAIL_GPIO_Port GPIOA
#define DUT_ADC_Pin GPIO_PIN_6
#define DUT_ADC_GPIO_Port GPIOA
#define PM_LO_ADC_Pin GPIO_PIN_7
#define PM_LO_ADC_GPIO_Port GPIOA
#define PM_HI_ADC_Pin GPIO_PIN_0
#define PM_HI_ADC_GPIO_Port GPIOB
#define PM_V_ADC_Pin GPIO_PIN_1
#define PM_V_ADC_GPIO_Port GPIOB
#define DUT_TX_Pin GPIO_PIN_10
#define DUT_TX_GPIO_Port GPIOB
#define DUT_RX_Pin GPIO_PIN_11
#define DUT_RX_GPIO_Port GPIOB
#define DUT_RST_Pin GPIO_PIN_12
#define DUT_RST_GPIO_Port GPIOB
#define DUT_CTS_Pin GPIO_PIN_13
#define DUT_CTS_GPIO_Port GPIOB
#define DUT_RTS_Pin GPIO_PIN_14
#define DUT_RTS_GPIO_Port GPIOB
#define USER_BTN_Pin GPIO_PIN_15
#define USER_BTN_GPIO_Port GPIOB
#define DUT_IC_Pin GPIO_PIN_8
#define DUT_IC_GPIO_Port GPIOA
#define IF_TX_Pin GPIO_PIN_9
#define IF_TX_GPIO_Port GPIOA
#define IF_RX_Pin GPIO_PIN_10
#define IF_RX_GPIO_Port GPIOA
#define DUT_NSS_Pin GPIO_PIN_15
#define DUT_NSS_GPIO_Port GPIOA
#define DUT_SCK_Pin GPIO_PIN_3
#define DUT_SCK_GPIO_Port GPIOB
#define DUT_MISO_Pin GPIO_PIN_4
#define DUT_MISO_GPIO_Port GPIOB
#define DUT_MOSI_Pin GPIO_PIN_5
#define DUT_MOSI_GPIO_Port GPIOB
#define DUT_SCL_Pin GPIO_PIN_6
#define DUT_SCL_GPIO_Port GPIOB
#define DUT_SDA_Pin GPIO_PIN_7
#define DUT_SDA_GPIO_Port GPIOB
#define DUT_PWM_Pin GPIO_PIN_8
#define DUT_PWM_GPIO_Port GPIOB
#define DUT_DAC_Pin GPIO_PIN_9
#define DUT_DAC_GPIO_Port GPIOB

#define LED_OFF				GPIO_PIN_SET

#define GPIO_NSS_CTS_IRQ	EXTI15_10_IRQn
#define GPIO_DEBUG0_IRQ		EXTI0_IRQn
#define GPIO_DEBUG1_IRQ		EXTI1_IRQn
#define GPIO_DEBUG2_IRQ		EXTI2_IRQn
#define GPIO_NSS_CTS_INT	EXTI15_10_IRQHandler
#define GPIO_DEBUG0_INT		EXTI0_IRQHandler
#define GPIO_DEBUG1_INT		EXTI1_IRQHandler
#define GPIO_DEBUG2_INT		EXTI2_IRQHandler

#define DUT_I2C				I2C1
#define DUT_I2C_EV_INT		I2C1_EV_IRQHandler
#define DUT_I2C_ERR_INT		I2C1_ER_IRQHandler
#define EN_RCC_DUT_I2C_CLK	__HAL_RCC_I2C1_CLK_ENABLE()

#define DUT_UART			USART3
#define DUT_UART_DMA_RX_INT	DMA1_Channel3_IRQHandler
#define DUT_UART_DMA_TX_INT	DMA1_Channel2_IRQHandler
#define DUT_UART_INT		USART3_IRQHandler

#define IF_UART				USART1
#define IF_UART_DMA_RX_INT	DMA1_Channel5_IRQHandler
#define IF_UART_DMA_TX_INT	DMA1_Channel4_IRQHandler

#define DUT_SPI				SPI1
#define DUT_SPI_INT			SPI1_IRQHandler

#define DUT_PWM_TMR			TIM4

#define DUT_DAC_TMR			TIM4
#define PWM_DAC_REMAP
#define EN_RCC_DUT_PWM_DAC_CLK	__HAL_RCC_TIM4_CLK_ENABLE()

#define DUT_ADC_DEV			ADC2
#define ADC_INT				ADC1_2_IRQHandler
#define ADC_IRQ				ADC1_2_IRQn
#endif

#ifdef NUCLEOF103RB
#define USER_BTN_Pin GPIO_PIN_13
#define USER_BTN_GPIO_Port GPIOC
#define PM_V_ADC_Pin GPIO_PIN_0
#define PM_V_ADC_GPIO_Port GPIOC
#define PM_LO_ADC_Pin GPIO_PIN_1
#define PM_LO_ADC_GPIO_Port GPIOC
#define PM_HI_ADC_Pin GPIO_PIN_2
#define PM_HI_ADC_GPIO_Port GPIOC
#define TEST_WARN_Pin GPIO_PIN_0
#define TEST_WARN_GPIO_Port GPIOA
#define TEST_FAIL_Pin GPIO_PIN_1
#define TEST_FAIL_GPIO_Port GPIOA
#define IF_TX_Pin GPIO_PIN_2
#define IF_TX_GPIO_Port GPIOA
#define IF_RX_Pin GPIO_PIN_3
#define IF_RX_GPIO_Port GPIOA
#define TEST_PASS_Pin GPIO_PIN_4
#define TEST_PASS_GPIO_Port GPIOA
#define LED0_Pin GPIO_PIN_5
#define LED0_GPIO_Port GPIOA
#define DUT_ADC_Pin GPIO_PIN_0
#define DUT_ADC_GPIO_Port GPIOB
#define DUT_RST_Pin GPIO_PIN_2
#define DUT_RST_GPIO_Port GPIOB
#define DUT_NSS_Pin GPIO_PIN_12
#define DUT_NSS_GPIO_Port GPIOB
#define DUT_SCK_Pin GPIO_PIN_13
#define DUT_SCK_GPIO_Port GPIOB
#define DUT_MISO_Pin GPIO_PIN_14
#define DUT_MISO_GPIO_Port GPIOB
#define DUT_MOSI_Pin GPIO_PIN_15
#define DUT_MOSI_GPIO_Port GPIOB
#define DUT_PWM_Pin GPIO_PIN_8
#define DUT_PWM_GPIO_Port GPIOC
#define DUT_DAC_Pin GPIO_PIN_9
#define DUT_DAC_GPIO_Port GPIOC
#define DUT_IC_Pin GPIO_PIN_8
#define DUT_IC_GPIO_Port GPIOA
#define DUT_TX_Pin GPIO_PIN_9
#define DUT_TX_GPIO_Port GPIOA
#define DUT_RX_Pin GPIO_PIN_10
#define DUT_RX_GPIO_Port GPIOA
#define DUT_CTS_Pin GPIO_PIN_11
#define DUT_CTS_GPIO_Port GPIOA
#define DUT_RTS_Pin GPIO_PIN_12
#define DUT_RTS_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define DEBUG0_Pin GPIO_PIN_3
#define DEBUG0_GPIO_Port GPIOB
#define DEBUG1_Pin GPIO_PIN_4
#define DEBUG1_GPIO_Port GPIOB
#define DEBUG2_Pin GPIO_PIN_5
#define DEBUG2_GPIO_Port GPIOB
#define DUT_SCL_Pin GPIO_PIN_8
#define DUT_SCL_GPIO_Port GPIOB
#define DUT_SDA_Pin GPIO_PIN_9
#define DUT_SDA_GPIO_Port GPIOB

#define LED_OFF 			GPIO_PIN_RESET

#define GPIO_NSS_CTS_IRQ	EXTI15_10_IRQn
#define GPIO_DEBUG0_IRQ		EXTI3_IRQn
#define GPIO_DEBUG1_IRQ		EXTI4_IRQn
#define GPIO_DEBUG2_IRQ		EXTI9_5_IRQn
#define GPIO_NSS_CTS_INT	EXTI15_10_IRQHandler
#define GPIO_DEBUG0_INT		EXTI3_IRQHandler
#define GPIO_DEBUG1_INT		EXTI4_IRQHandler
#define GPIO_DEBUG2_INT		EXTI9_5_IRQHandler


#define DUT_I2C				I2C1
#define DUT_I2C_EV_INT		I2C1_EV_IRQHandler
#define DUT_I2C_ERR_INT		I2C1_ER_IRQHandler
#define EN_RCC_DUT_I2C_CLK	__HAL_RCC_I2C1_CLK_ENABLE()

#define DUT_UART			USART1
#define DUT_UART_DMA_RX_INT	DMA1_Channel5_IRQHandler
#define DUT_UART_DMA_TX_INT	DMA1_Channel4_IRQHandler
#define DUT_UART_INT		USART1_IRQHandler

#define IF_UART				USART2
#define IF_UART_DMA_RX_INT	DMA1_Channel6_IRQHandler
#define IF_UART_DMA_TX_INT	DMA1_Channel7_IRQHandler

#define DUT_SPI				SPI2
#define DUT_SPI_INT			SPI2_IRQHandler

#define DUT_PWM_TMR			TIM3

#define DUT_DAC_TMR			TIM3
#define PWM_DAC_REMAP		__HAL_AFIO_REMAP_TIM3_ENABLE()
#define EN_RCC_DUT_PWM_DAC_CLK	__HAL_RCC_TIM3_CLK_ENABLE()

#define DUT_ADC_DEV			ADC2
#define ADC_INT				ADC1_2_IRQHandler
#define ADC_IRQ				ADC1_2_IRQn
#endif

#define USER_BTN USER_BTN_GPIO_Port, USER_BTN_Pin
#define PM_V_ADC PM_V_ADC_GPIO_Port, PM_V_ADC_Pin
#define PM_LO_ADC PM_LO_ADC_GPIO_Port, PM_LO_ADC_Pin
#define PM_HI_ADC PM_HI_ADC_GPIO_Port, PM_HI_ADC_Pin
#define TEST_WARN TEST_WARN_GPIO_Port, TEST_WARN_Pin
#define TEST_FAIL TEST_FAIL_GPIO_Port, TEST_FAIL_Pin
#define IF_TX IF_TX_GPIO_Port, IF_TX_Pin
#define IF_RX IF_RX_GPIO_Port, IF_RX_Pin
#define TEST_PASS TEST_PASS_GPIO_Port, TEST_PASS_Pin
#define LED0 LED0_GPIO_Port, LED0_Pin
#define DUT_ADC DUT_ADC_GPIO_Port, DUT_ADC_Pin
#define DUT_RST DUT_RST_GPIO_Port, DUT_RST_Pin
#define DUT_NSS DUT_NSS_GPIO_Port, DUT_NSS_Pin
#define DUT_SCK DUT_SCK_GPIO_Port, DUT_SCK_Pin
#define DUT_MISO DUT_MISO_GPIO_Port, DUT_MISO_Pin
#define DUT_MOSI DUT_MOSI_GPIO_Port, DUT_MOSI_Pin
#define DUT_PWM DUT_PWM_GPIO_Port, DUT_PWM_Pin
#define DUT_DAC DUT_DAC_GPIO_Port, DUT_DAC_Pin
#define DUT_IC DUT_IC_GPIO_Port, DUT_IC_Pin
#define DUT_TX DUT_TX_GPIO_Port, DUT_TX_Pin
#define DUT_RX DUT_RX_GPIO_Port, DUT_RX_Pin
#define DUT_CTS DUT_CTS_GPIO_Port, DUT_CTS_Pin
#define DUT_RTS DUT_RTS_GPIO_Port, DUT_RTS_Pin
#define DEBUG0 DEBUG0_GPIO_Port, DEBUG0_Pin
#define DEBUG1 DEBUG1_GPIO_Port, DEBUG1_Pin
#define DEBUG2 DEBUG2_GPIO_Port, DEBUG2_Pin
#define DUT_SCL DUT_SCL_GPIO_Port, DUT_SCL_Pin
#define DUT_SDA DUT_SDA_GPIO_Port, DUT_SDA_Pin



void init_periphs(void);
void init_clock(void);

#endif /* PORT_H_ */
