/*
Button program for microcontroller board.
Designed by Wilfred Githuka
www.githuka.com
github.com/wilfredgithuka
Hardware: STC15F2K60S
*/

//Loading the includes
#include "stc15f2k60s2.h" // main header file for the board
#include "intrins.h" 	//header file to be used later
#define uchar unsigned char
#define uint unsigned int	

//Defining variables
uchar key_value;
uchar k5_count; //count from 1....7

//Hardware pins
sbit led0=P4^0; //led0 at port 4 pin 0
sbit led1=P4^1;
sbit led2=P4^2;
sbit led3=P4^3;
sbit led4=P4^4;
sbit led5=P4^5;
sbit led6=P4^6;
sbit led7=P4^7;
sbit buzzer=P3^5;

//Function list
void display(); //display function
void key(); //button
void delay_10ms(); //delay 10ms
void key2_function(); //function of button s2
void key3_function(); //function of button s3
void key4_function(); //function of button s4
void key5_function(); //function of button s5
void key6_function(); //function of button s6
void key7_function(); //function of button s7

//Main program
main()
{
	while(1)
	{
		key();
	}
}

//Key
void key()
{
	uchar temp;
	
	temp=P1; //read from P1 and store it in temp
	temp=~temp; //invert 0s to 1s and vice versa
	temp=temp&0xfc; //make all other pins to 0
	if (temp!=0)
	{
		;
		delay_10ms();
		temp=P1;
		temp=P1; //read from P1 and store it in temp
		temp=~temp; //invert 0s to 1s and vice versa
		temp=temp&0xfc; //make all other pins to 0
		if (temp!=0)
		{
			key_value=temp;
			while(temp) //Waiting for a release
			{
				temp=P1; //read from P1 and store it in temp
				temp=~temp; //invert 0s to 1s and vice versa
				temp=temp&0xfc; //make all other pins to 0
			}	
			//release, extecute function of key
			switch(key_value)
			{
				case 0x04: //if key value=0x04
					key2_function();
				break;
				case 0x08:
					key3_function();
				break;
				case 0x10:
					key4_function();
				break;
				case 0x20:
					key5_function();
				break;
				case 0x40:
					key6_function();
				break;
				case 0x80:
					key7_function();
				break;
				default:
					;
				break;
			
			}
		}
		else
		{
			;
		}
	}
	else
	{
		;
	}
}
	
// Delay 10ms

void delay_10ms()
{
		uchar i, j;
	
	i = 117;
	j = 184;
	do
	{
		while (--j);
	}	while	(--i);
}
// Display function
void disp()
{
	;
}

// Switch 2
void key2_function()
{
	;
}

//Switch 3
void key3_function()
{
	;
}

//Switch 4
void key4_function()
{
	;
}

// Switch 5
void key5_function()
{
	k5_count++; //Every time you press a button you add 1
	if(k5_count>=31)
	{
		k5_count=0; //Let k5_count back to 0
	}
	else
	{
		;
	}
	switch (k5_count)
	{
		case 0: // 0--all are off
			P4=0xff; // 1111 1111
		break;
		case 1:
			P4=0xfe;
		break;
		case 2:
			P4=0xfe;
		break;
		case 3:
			P4=0xfb;
		break;
		case 4:
			P4=0xf7;
		break;
		case 5:
			P4=0xef;
		break;
		case 6:
			P4=0xdf;
		break;
		case 7:
			P4=0xbf;
		break;
		case 8:
			P4=0x7f;
		break;
		case 9:
			P4=0x00;
		break;
		case 10:
			P4=0x55;
		break;
		case 11:
			P4=0xaa;
		break;
		case 12:
			P4=0xfe;
		break;
		case 13:
			P4=0xfc;
		break;
		case 14:
			P4=0xf8;
		break;
		case 15:
			P4=0xe0;
		break;
		case 16:
			P4=0xc0;
		break;
		case 17:
			P4=0x80;
		break;
		case 18:
			P4=0x00;
		break;
		case 19:
			P4=0xff;
		break;
		case 20:
			P4=0x55;
			P3=0x00;
		break;
		case 21:
			P4=0xaa;
			P4=0xff;
		break;
		case 22:
			P4=0x7f;
		break;
		case 23:
			P4=0x3f;
		break;
		case 24:
			P4=0x1f;
		break;
		case 25:
			P4=0x0f;
		break;
		case 26:
			P4=0x07;
		break;
		case 27:
			P4=0x03;
		break;
		case 28:
			P4=0x01;
		break;
		case 29:
			P4=0x00;
			P3=0x00;
		break;
		case 30:
			P3=0xff;
		break;
	}
}

//Switch 6
void key6_function()
{
	;
}

//Switch 7
void key7_function()
{
	;
}