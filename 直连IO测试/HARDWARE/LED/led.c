#include "led.h" 
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK STM32F407������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2014/5/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	 

//��ʼ��PF9��PF10Ϊ�����.��ʹ���������ڵ�ʱ��		    
//LED IO��ʼ��
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
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;//��ͨ���ģʽ
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//�������
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//����
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6
	  | GPIO_Pin_7
	  | GPIO_Pin_8
	  | GPIO_Pin_9
	  | GPIO_Pin_10
	  | GPIO_Pin_11;

  GPIO_Init(GPIOF, &GPIO_InitStructure);//��ʼ��GPIO

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2
	  | GPIO_Pin_3
	  | GPIO_Pin_4
	  | GPIO_Pin_5
      | GPIO_Pin_11
	  | GPIO_Pin_6;
  GPIO_Init(GPIOE, &GPIO_InitStructure);//��ʼ��GPIO
  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3
	  | GPIO_Pin_6
	  | GPIO_Pin_7;
  GPIO_Init(GPIOD, &GPIO_InitStructure);//��ʼ��GPIO
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0
	  | GPIO_Pin_1
	  | GPIO_Pin_2
	  | GPIO_Pin_3
	  | GPIO_Pin_11
	  | GPIO_Pin_13;
  GPIO_Init(GPIOC, &GPIO_InitStructure);//��ʼ��GPIO
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6
	  | GPIO_Pin_7
	  | GPIO_Pin_8
	  | GPIO_Pin_9
	  | GPIO_Pin_10
	  | GPIO_Pin_11
      | GPIO_Pin_14;
  GPIO_Init(GPIOB, &GPIO_InitStructure);//��ʼ��GPIO
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0
	  | GPIO_Pin_13
	  | GPIO_Pin_9
	  | GPIO_Pin_11
	  | GPIO_Pin_12
	  | GPIO_Pin_14
	  | GPIO_Pin_15;
  GPIO_Init(GPIOG, &GPIO_InitStructure);//��ʼ��GPIO
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6
	  | GPIO_Pin_12
	  | GPIO_Pin_9
	  | GPIO_Pin_11;
    GPIO_Init(GPIOA, &GPIO_InitStructure);//��ʼ��GPIO
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//��ͨ���ģʽ
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3
                               | GPIO_Pin_4
                               | GPIO_Pin_5
                               | GPIO_Pin_6;
    GPIO_Init(GPIOE, &GPIO_InitStructure);
      GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//��ͨ���ģʽ
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8
                               | GPIO_Pin_6
                               | GPIO_Pin_7;
    GPIO_Init(GPIOF, &GPIO_InitStructure);

    


}






