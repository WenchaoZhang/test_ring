/**
  **********************************  STM8S  ***********************************
  * @文件名     ： main.c
  * @作者       ： strongerHuang
  * @库版本     ： V2.2.0
  * @文件版本   ： V1.0.0
  * @日期       ： 2017年04月10日
  * @摘要       ： 主函数 - Demo软件工程
  ******************************************************************************/
/*----------------------------------------------------------------------------
  更新日志:
  2017-04-10 V1.0.0:初始版本
  ----------------------------------------------------------------------------*/
/* 包含的头文件 --------------------------------------------------------------*/
#include "bsp.h"


/************************************************
函数名称 ： SoftwareDelay
功    能 ： 软件延时
参    数 ： Cnt --- 延时计数
返 回 值 ： 无
作    者 ： strongerHuang
*************************************************/
void SoftwareDelay(uint32_t Cnt)
{
  while(Cnt--);
}

/************************************************
函数名称 ： main
功    能 ： 主函数入口
参    数 ： 无
返 回 值 ： 无
作    者 ： strongerHuang
*************************************************/
void main(void)
{
  BSP_Initializes();

  while(1)
  {
    LED_ON;                                      //LED亮
    SoftwareDelay(0x6000);
    LED_OFF;                                     //LED灭
    SoftwareDelay(0x6000);
  }
}


#ifdef USE_FULL_ASSERT                           //断言(参考官方)

void assert_failed(u8* file, u32 line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif


/**** Copyright (C)2017 strongerHuang. All Rights Reserved **** END OF FILE ****/
