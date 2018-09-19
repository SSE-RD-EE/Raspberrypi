#include<pic.h>
//#define uchar
__CONFIG(0x3B31);
void main()
{
//	TRISD=0xfe;//11111110
//	PORTD=0x01;//00000001
//	TRISD2=0;
	TRISD2=0;
	RD2=1;
	while(1);
}
