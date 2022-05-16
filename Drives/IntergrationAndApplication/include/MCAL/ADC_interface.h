/************************************/
/*	Author  : Mohamed Essam			*/
/*	Date 	: 20/3/2022				*/
/*	Version : V01					*/
/************************************/
#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H

void ADC_VoidInit(void);
//u32 ADC1_2_IRQHandler(void);
u32 ADC_u32ReturnValue(void);
void ADC_voidSetCallBack(void(*ADC_u8Ptr)(void));
u16 ADC_u16ReadChannelPoll(u16 Channel_u16Number);

#endif
