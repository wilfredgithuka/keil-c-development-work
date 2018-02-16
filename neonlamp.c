/*
	This is neonlamp controller,8 channel
	designed by cgr, redeveloped by Wilfred
	v2.0
*/
#include  "stc15f2k60s2.h" // head  .doc  .c
#include "intrins.h"
#define uchar unsigned char
#define uint unsigned int

//===define variable
uchar neon_state[]={0x38,0xc7,0x7e,0xe7,0xff,0x00,0xad,0x7e,0xe7,0xbd};
uchar neon_state4[]={0x00,0x38,0xc7,0x00};
uchar hour=0x0c; 

//define one variable =12
uchar	min;
uchar	sec=0;
uchar temperature;//
uint count;

//===define bit variable
bit flag;
bit tx_flag;
bit  weather_flag;

//====hardware pins declarations
//====Example: led0---P4.0
sbit 	motor_0=P4^0;
sbit  led1=P4^1;
sbit  motor_2=P4^2;
sbit  motor_3=P4^3;
sbit  led4=P4^4;
sbit  motor_5=P4^5;
sbit  led6=P4^6;
sbit  led7=P4^7;
sbit buzzer=P3^5;

//************function  list*************
void 	display();//display function
void 	key();
void 	delay();
void  Delay300ms();
void  delay_1s();

//++++++++++++main program +++++++++++
main()
{	uchar i;
	while(1)
	{
		for(i=0;i<10;i++)
		{
			P4=neon_state[i];// control data send to P4 port
			delay_1s();//delay 
		}		
	}		
}

//====key
void	key()
{
	;
}

//==delay
void delay()
{
;
}

//====300ms delay
void Delay300ms()		//@12.000MHz
{
	unsigned char i, j, k;
	_nop_();
	_nop_();
	i = 14;
	j = 174;
	k = 224;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

//==define delay_1s()
void	delay_1s()
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 46;
	j = 153;
	k = 245;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}
