/*
 * main.c
 *
 *  Created on: Apr 16, 2022
 *      Author: Kishk
 */


#include "main.h"
void LedToggle(void)
{
	static u8 flag = 0 ;
	Dio_enuWriteChannel(DIO_u8CHANNEL31,flag);
	TGL_BIT(flag,0);
}

Gpt_ChannelCfg enuServoControl= {Timer_Div_By_256,LedToggle} ;
Gpt_ConfigType enuTimersCfgs = {NULL,&enuServoControl,NULL};
int main(void)
{
	u16 OneSecond = (u16)46875;
	//s8	Loc_s8ServoAngle = -90;
	/*INIT SYSTEM*/
	Port_vidInit();
	//Servo_vidInit();
	SREG |= (1 << 7);
	Gpt_Init(&enuTimersCfgs);
	Gpt_EnableNotification(Gpt_enuTimer1);
	Gpt_StartTimer(Gpt_enuTimer1,OneSecond);
	while(1)
	{


//		//Loc_s8ServoAngle = Map(Loc_u16AnalogResult , ADC_u16MIN , ADC_u16MAX , SERVO_s8MIN_ANGLE , SERVO_s8MAX_ANGLE);
//		Servo_vidSetAngle(Servo_ChA , Loc_s8ServoAngle);
//		Loc_s8ServoAngle+=10;
//		if(Loc_s8ServoAngle==0)
//		{
//			Loc_s8ServoAngle = -90 ;
//		}
//		_delay_ms(3000);
	}
	return 0;
}
