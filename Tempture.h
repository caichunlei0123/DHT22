#include"reg52.h"
#include<intrins.h>
#define uchar unsigned char
#define uint unsigned int
sbit dataport=P1^0;
//���������ʱ
void delay1s(void);
void DelayX10us(uchar t);
void delay10us(void);
//��ȡ�¶�
uchar DHT22Init();
uchar GetOneBit();
void Get40Bit(uchar *p);