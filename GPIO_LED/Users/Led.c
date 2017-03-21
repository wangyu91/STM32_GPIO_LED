/*********************** @copy right ���� **************************************
* �ļ���: led.c
* ����  : led LED ��ʼ��
* ����  : IAR 7.8x
* ����  : 20/03/2017
*******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "Led.h"

/* Private Variables ---------------------------------------------------------*/

/* Private Typedef -----------------------------------------------------------*/

/* Private Function Prototype ------------------------------------------------*/

/* Private Functions ---------------------------------------------------------*/
void LED_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_t1, GPIO_t2;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF, ENABLE);
	
	GPIO_t1.GPIO_Pin   = GPIO_Pin_0;
	GPIO_t1.GPIO_Mode  = GPIO_Mode_Out_PP;
	GPIO_t1.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_t2.GPIO_Pin   = GPIO_Pin_7 | GPIO_Pin_8;
	GPIO_t2.GPIO_Mode  = GPIO_Mode_Out_PP;
	GPIO_t2.GPIO_Speed = GPIO_Speed_50MHz;

	GPIO_Init(GPIOB, &GPIO_t1);
	GPIO_Init(GPIOF, &GPIO_t2);

	GPIO_SetBits(GPIOB, GPIO_Pin_0);
	GPIO_SetBits(GPIOF, GPIO_Pin_7 | GPIO_Pin_8);
}

/******************** End of File *********************************************/
