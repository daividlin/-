#include "led.h" 
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32F407开发板
//LED驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2014/5/2
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	 

//初始化PF9和PF10为输出口.并使能这两个口的时钟		    
//LED IO初始化
void LED_Init(void)
{    	 
  GPIO_InitTypeDef  GPIO_InitStructure;

  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA 
	  | RCC_AHB1Periph_GPIOB
	  | RCC_AHB1Periph_GPIOC
	  | RCC_AHB1Periph_GPIOD
	  | RCC_AHB1Periph_GPIOE
	  | RCC_AHB1Periph_GPIOF
    | RCC_AHB1Periph_GPIOG
	  , ENABLE);

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 
	  | GPIO_Pin_5
	  | GPIO_Pin_6
	  | GPIO_Pin_7;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;//普通输出模式
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//上拉
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6
	  | GPIO_Pin_7
	  | GPIO_Pin_8
	  | GPIO_Pin_9
	  | GPIO_Pin_10
	  | GPIO_Pin_11;

  GPIO_Init(GPIOF, &GPIO_InitStructure);//初始化GPIO

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2
	  | GPIO_Pin_3
	  | GPIO_Pin_4
	  | GPIO_Pin_5
      | GPIO_Pin_11
	  | GPIO_Pin_6;
  GPIO_Init(GPIOE, &GPIO_InitStructure);//初始化GPIO
  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3
	  | GPIO_Pin_6
	  | GPIO_Pin_7;
  GPIO_Init(GPIOD, &GPIO_InitStructure);//初始化GPIO
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0
	  | GPIO_Pin_1
	  | GPIO_Pin_2
	  | GPIO_Pin_3
	  | GPIO_Pin_11
	  | GPIO_Pin_13;
  GPIO_Init(GPIOC, &GPIO_InitStructure);//初始化GPIO
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6
	  | GPIO_Pin_7
	  | GPIO_Pin_8
	  | GPIO_Pin_9
	  | GPIO_Pin_10
	  | GPIO_Pin_11
      | GPIO_Pin_14;
  GPIO_Init(GPIOB, &GPIO_InitStructure);//初始化GPIO
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0
	  | GPIO_Pin_13
	  | GPIO_Pin_9
	  | GPIO_Pin_11
	  | GPIO_Pin_12
	  | GPIO_Pin_14
	  | GPIO_Pin_15;
  GPIO_Init(GPIOG, &GPIO_InitStructure);//初始化GPIO
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6
	  | GPIO_Pin_12
	  | GPIO_Pin_9
	  | GPIO_Pin_11;
    GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化GPIO
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//普通输出模式
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3
                               | GPIO_Pin_4
                               | GPIO_Pin_5
                               | GPIO_Pin_6;
    GPIO_Init(GPIOE, &GPIO_InitStructure);
      GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//普通输出模式
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8
                               | GPIO_Pin_6
                               | GPIO_Pin_7;
    GPIO_Init(GPIOF, &GPIO_InitStructure);

    


}






