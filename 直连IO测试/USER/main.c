#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"

    u8 readbit = 0;

int main(void)
{
    int i = 0;
	delay_init(168);		  //初始化延时函数
	LED_Init();		        //初始化LED端口
    uart_init(115200);
usart2_init(115200);
  /**下面是通过直接操作库函数的方式实现IO控制**/

	while (1)
	{
        PGout(13) = 1;
        PDout(3) = 1;
        PDout(6) = 1;
        PDout(7) = 1;
        PCout(11) = 1;
        PGout(9) = 1;
        PGout(11) = 1;
        PGout(12) = 1;
        PFout(11) = 1;
        PBout(14) = 1;
        PCout(2) = 1;
        PCout(3) = 1;
        readbit = (PEin(3)<<7) | (PEin(4)<<6)| (PEin(5)<<5)| (PEin(6)<<4)| (PFin(6)<<3)| (PFin(7)<<2)| (PFin(8)<<1);
        printf("%x\r\n", readbit);

		delay_ms(500); 
        PGout(13) = 0;
        PDout(3) = 0;
        PDout(6) = 0;
        PDout(7) = 0;
        PGout(9) = 0;
        PGout(11) = 0;
        PGout(12) = 0;
        PCout(11) = 0;
        PFout(11) = 0;
        PBout(14) = 0;
        PCout(2) = 0;
        PCout(3) = 0;
		delay_ms(500);                     
	}
}


/**
*******************下面注释掉的代码是通过 位带 操作实现IO口控制**************************************

int main(void)
{

	delay_init(168);		  //初始化延时函数
	LED_Init();		        //初始化LED端口
  while(1)
	{
	 LED0=0;			  //LED0亮
	   LED1=1;				//LED1灭
		 delay_ms(500);
		 LED0=1;				//LED0灭
		 LED1=0;				//LED1亮
		 delay_ms(500);
	 }
}
**************************************************************************************************
 **/

 /**
 *******************下面注释掉的代码是通过 直接操作寄存器 方式实现IO口控制**************************************
 int main(void)
 {

	 delay_init(168);		  //初始化延时函数
	 LED_Init();		        //初始化LED端口
	 while(1)
	 {
	  GPIOF->BSRRH=GPIO_Pin_9;//LED0亮
		GPIOF->BSRRL=GPIO_Pin_10;//LED1灭
		  delay_ms(500);
	  GPIOF->BSRRL=GPIO_Pin_9;//LED0灭
		GPIOF->BSRRH=GPIO_Pin_10;//LED1亮
		  delay_ms(500);

	  }
  }
 **************************************************************************************************
 **/




