/******************** Copyright wisearm.com *********************************
* File Name         : CrabVMS.c
* Author            : �ⴴ��(aleyn.wu)
* Version           : V1.0.0
* Create Date       : 2012-06-15
* Last Update       : 2016-12-31
* Description       : ���������
********************************************************************************/
#include "CrabVMS.h"

int application_start( void )
{    
  //��ʼ��Ӳ��
  Hardware_Init();
    
  //���������
  CrabSystem_Running();
 
  return 0;
}
