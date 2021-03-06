/**
  ******************************************************************************
  * @file    Inc/main.h 
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    26-August-2016
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stdio.h"

#include "stm32f4xx_nucleo.h"
#include "x_nucleo_iks01a1.h"
#include "x_nucleo_iks01a1_imu_6axes.h"	

/* Exported types ------------------------------------------------------------*/
/* Uncomment the line below to run debug mode */
//#define DEBUG

/* Exported constants --------------------------------------------------------*/
extern I2C_HandleTypeDef    I2C_SHIELDS_Handle;
/* Definition for USART2 clock resources */
#define USART2_CLK_ENABLE()              __USART2_CLK_ENABLE()
#define USART2_RX_GPIO_CLK_ENABLE()      __GPIOA_CLK_ENABLE()
#define USART2_TX_GPIO_CLK_ENABLE()      __GPIOA_CLK_ENABLE()
#define DMA1_CLK_ENABLE()                __DMA1_CLK_ENABLE()

/* Definition for USART2 Pins */
#define USART2_TX_PIN                    GPIO_PIN_2
#define USART2_TX_GPIO_PORT              GPIOA  
#define USART2_TX_AF                     GPIO_AF7_USART2
#define USART2_RX_PIN                    GPIO_PIN_3
#define USART2_RX_GPIO_PORT              GPIOA 
#define USART2_RX_AF                     GPIO_AF7_USART2

/* Definition for USART2's DMA */
#define USART2_TX_DMA_CHANNEL            DMA_CHANNEL_4
#define USART2_TX_DMA_STREAM             DMA1_Stream6

/* Definition for USART2's NVIC */
#define USART2_DMA_TX_IRQn               DMA1_Stream6_IRQn
#define USART2_DMA_TX_IRQHandler         DMA1_Stream6_IRQHandler

#define USART2_FORCE_RESET()             __USART2_FORCE_RESET()
#define USART2_RELEASE_RESET()           __USART2_RELEASE_RESET()

/* Definition for I2C1 clock resources */
#define I2C1_CLK_ENABLE()                __I2C1_CLK_ENABLE()
#define DMA1_CLK_ENABLE()                __DMA1_CLK_ENABLE()
#define I2C1_SDA_GPIO_CLK_ENABLE()       __GPIOB_CLK_ENABLE()
#define I2C1_SCL_GPIO_CLK_ENABLE()       __GPIOB_CLK_ENABLE() 

#define I2C1_FORCE_RESET()               __I2C1_FORCE_RESET()
#define I2C1_RELEASE_RESET()             __I2C1_RELEASE_RESET()

/* Definition for I2C1 Pins */
#define I2C1_SCL_PIN                     GPIO_PIN_8
#define I2C1_SCL_GPIO_PORT               GPIOB
#define I2C1_SCL_AF                      GPIO_AF4_I2C1
#define I2C1_SDA_PIN                     GPIO_PIN_9
#define I2C1_SDA_GPIO_PORT               GPIOB
#define I2C1_SDA_AF                      GPIO_AF4_I2C1

/* Definition for I2C1 DMA */
#define I2C1_RX_DMA_CHANNEL              DMA_CHANNEL_1
#define I2C1_RX_DMA_STREAM               DMA1_Stream0

/* Definition for I2C1's NVIC */
#define I2C1_DMA_RX_IRQn                 DMA1_Stream0_IRQn
#define I2C1_DMA_RX_IRQHandler           DMA1_Stream0_IRQHandler

/* Exported functions ------------------------------------------------------- */
void Error_Handler(void);
#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
