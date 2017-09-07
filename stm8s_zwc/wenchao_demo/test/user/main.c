/**
  **********************************  STM8S  ***********************************
  * @�ļ���     �� main.c
  * @����       �� strongerHuang
  * @��汾     �� V2.2.0
  * @�ļ��汾   �� V1.0.0
  * @����       �� 2017��04��10��
  * @ժҪ       �� ������ - Demo�������
  ******************************************************************************/
/*----------------------------------------------------------------------------
  ������־:
  2017-04-10 V1.0.0:��ʼ�汾
  ----------------------------------------------------------------------------*/
/* ������ͷ�ļ� --------------------------------------------------------------*/
#include "bsp.h"


/************************************************
�������� �� SoftwareDelay
��    �� �� �����ʱ
��    �� �� Cnt --- ��ʱ����
�� �� ֵ �� ��
��    �� �� strongerHuang
*************************************************/
void SoftwareDelay(uint32_t Cnt)
{
  while(Cnt--);
}

/************************************************
�������� �� main
��    �� �� ���������
��    �� �� ��
�� �� ֵ �� ��
��    �� �� strongerHuang
*************************************************/
void main(void)
{
  BSP_Initializes();

  while(1)
  {
    LED_ON;                                      //LED��
    SoftwareDelay(0x6000);
    LED_OFF;                                     //LED��
    SoftwareDelay(0x6000);
  }
}


#ifdef USE_FULL_ASSERT                           //����(�ο��ٷ�)

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
