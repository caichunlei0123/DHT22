#include"reg52.h"
#include<intrins.h>
#define uchar unsigned char
#define uint unsigned int
sbit dataport=P1^0;
//用于软件延时
void delay1s(void);
void DelayX10us(uchar t);
void delay10us(void);
//读取温度
uchar DHT22Init();
uchar GetOneBit();
void Get40Bit(uchar *p);