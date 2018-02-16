/*
	This is button control led
	designed by cgr, redeveloped by Wilfred
	v2.0
*/
#include  "stc15f2k60s2.h" // head  .doc  .c
#include "intrins.h"
#define uchar unsigned char
#define uint unsigned int

//===define variable

unchar_key_value;

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
sbit 	led0=P4^0;
sbit  led1=P4^1;
sbit  led2=P4^2;
sbit  led3=P4^3;
sbit  led4=P4^4;
sbit  led5=P4^5;
sbit  led6=P4^6;
sbit  led7=P4^7;
sbit buzzer=P3^5;

//************function  list*************
void 	display();//display function
void 	key();
void  Delay10ms();
void  key1_function(); //The function of push button s2
void  key2_function();
void  key3_function();
void  key4_function();
void  key5_function();
void  key6_function();
//++++++++++++main program +++++++++++
main()
{	
	while(1)
	{
		key();
	}
}

//====key
void	key()
{
	unchar temp;
	temp=P1; //read from P1
	temp=~temp; //invert 0 to 1s
	temp=temp&0xfc; //make 1111 to 0000, and make all other usless pins to 0
	if(temp!=0) //If temp is not equal to zero, this means that a button has been pressed
	{
		
		key1_function();
		
	}
	else //it means any button has been pressed
	{
		
		;
		
	}
//====display
void display
{
	;
}
//====k2-function
void key2_function()
{
	;
}

void key2_function()
{
	;
}

void key3_function()
{
	;
}

void key4_function()
{
	;
}

void key5_function()
{
	;
}

void key6_function()
{
	;
}