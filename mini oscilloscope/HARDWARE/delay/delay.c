#include "delay.h"
#include "sys.h"
		   
//初始化延迟函数
//当使用ucos的时候,此函数会初始化ucos的时钟节拍
//SYSTICK的时钟固定为AHB时钟
//SYSCLK:系统时钟频率
void hal_delay_init(void)
{
	HAL_RCC_GetHCLKFreq();//1000000 1us中断一次，即HAL_Delay函数延时基准为1us
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000000);
}

void delay_us(u32 us)
{	
  HAL_Delay(us);
}

//延时nms
//nms:要延时的ms数
void delay_ms(u16 nms)
{
	u32 i;
	for(i=0;i<nms;i++) delay_us(1000);
}
