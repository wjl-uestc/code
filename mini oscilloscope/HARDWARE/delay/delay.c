#include "delay.h"
#include "sys.h"
		   
//��ʼ���ӳٺ���
//��ʹ��ucos��ʱ��,�˺������ʼ��ucos��ʱ�ӽ���
//SYSTICK��ʱ�ӹ̶�ΪAHBʱ��
//SYSCLK:ϵͳʱ��Ƶ��
void hal_delay_init(void)
{
	HAL_RCC_GetHCLKFreq();//1000000 1us�ж�һ�Σ���HAL_Delay������ʱ��׼Ϊ1us
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000000);
}

void delay_us(u32 us)
{	
  HAL_Delay(us);
}

//��ʱnms
//nms:Ҫ��ʱ��ms��
void delay_ms(u16 nms)
{
	u32 i;
	for(i=0;i<nms;i++) delay_us(1000);
}
