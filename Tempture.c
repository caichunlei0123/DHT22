#include"Tempture.h"

	void DelayX10us(uchar t)//dingshi
	{
	do {
	    _nop_();
	    _nop_();
	    _nop_();
	    _nop_();
	    _nop_();
	    _nop_();
	    _nop_();
	    _nop_();
	} while (--t);
	}

void delay1s(void)   //误差 0us
{
    unsigned char a,b,c;
    for(c=167;c>0;c--)
        for(b=171;b>0;b--)
            for(a=16;a>0;a--);
    _nop_();  //if Keil,require use intrins.h
}
void delay10us(void)   //误差 0us
{
    unsigned char a,b;
    for(b=1;b>0;b--)
        for(a=1;a>0;a--);
}


uchar DHT22Init() //初始化DHT22
{
   
  dataport=0;
  DelayX10us(52);
  dataport=1;
  DelayX10us(3);
  while(dataport);
  while(~dataport);
  DelayX10us(10);
  return 1;
}  

uchar GetOneBit()//获取一位数据
{
    while(~dataport);
	//DelayX10us(4);
	delay10us();delay10us();delay10us();delay10us();
   if(dataport)
   {
     //DelayX10us(4);
	 delay10us();delay10us();delay10us();delay10us();
	  return '1';
   }  
   else
   {
   	  return '0';
   }    
}

void Get40Bit(uchar *p)
{
 uchar i;
 for(i=0;i<50;i++)
 {
 	p[i]=GetOneBit();
 
 
 }

}