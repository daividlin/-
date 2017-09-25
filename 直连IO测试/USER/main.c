#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"

    u8 readbit = 0;

int main(void)
{
    int i = 0;
	delay_init(168);		  //��ʼ����ʱ����
	LED_Init();		        //��ʼ��LED�˿�
    uart_init(115200);
usart2_init(115200);
  /**������ͨ��ֱ�Ӳ����⺯���ķ�ʽʵ��IO����**/

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
*******************����ע�͵��Ĵ�����ͨ�� λ�� ����ʵ��IO�ڿ���**************************************

int main(void)
{

	delay_init(168);		  //��ʼ����ʱ����
	LED_Init();		        //��ʼ��LED�˿�
  while(1)
	{
	 LED0=0;			  //LED0��
	   LED1=1;				//LED1��
		 delay_ms(500);
		 LED0=1;				//LED0��
		 LED1=0;				//LED1��
		 delay_ms(500);
	 }
}
**************************************************************************************************
 **/

 /**
 *******************����ע�͵��Ĵ�����ͨ�� ֱ�Ӳ����Ĵ��� ��ʽʵ��IO�ڿ���**************************************
 int main(void)
 {

	 delay_init(168);		  //��ʼ����ʱ����
	 LED_Init();		        //��ʼ��LED�˿�
	 while(1)
	 {
	  GPIOF->BSRRH=GPIO_Pin_9;//LED0��
		GPIOF->BSRRL=GPIO_Pin_10;//LED1��
		  delay_ms(500);
	  GPIOF->BSRRL=GPIO_Pin_9;//LED0��
		GPIOF->BSRRH=GPIO_Pin_10;//LED1��
		  delay_ms(500);

	  }
  }
 **************************************************************************************************
 **/




