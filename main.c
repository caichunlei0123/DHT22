#include"reg52.h"
#include"Tempture.h"  
#include"lcd.h"

void main()
{
uchar arry[51]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   
  while(1)
  {

	 
  if(DHT22Init())
  {
    Get40Bit(arry); 
	
   } 
	
 
 	 LcdInit();
  	 LcdWriteData(arry[0]);
	 LcdWriteData(arry[1]);
	 LcdWriteData(arry[2]);
	 LcdWriteData(arry[3]);
	 LcdWriteData(arry[4]);
	 LcdWriteData(arry[5]);
	 LcdWriteData(arry[6]);
	 LcdWriteData(arry[7]);
	 LcdWriteData(arry[8]);
 	 LcdWriteData(arry[9]);
	 LcdWriteData(arry[10]);
	 LcdWriteData(arry[11]);
	 LcdWriteData(arry[12]);
	 LcdWriteData(arry[13]);
	 LcdWriteData(arry[14]);
	 LcdWriteData(arry[15]);
   	LcdWriteCom(0x80+0x40);
	  LcdWriteData(arry[16]);
	 LcdWriteData(arry[17]);
	 LcdWriteData(arry[18]);
	 LcdWriteData(arry[19]);
	 LcdWriteData(arry[20]);
	 LcdWriteData(arry[21]);
	 LcdWriteData(arry[22]);
	 LcdWriteData(arry[23]);
	 LcdWriteData(arry[24]);
 	 LcdWriteData(arry[25]);
	 LcdWriteData(arry[26]);
	 LcdWriteData(arry[27]);
	 LcdWriteData(arry[28]);
	 LcdWriteData(arry[29]);
	 LcdWriteData(arry[30]);
	 LcdWriteData(arry[31]);
	 delay1s();delay1s();delay1s();delay1s();delay1s();
 	LcdWriteCom(0x01);

     LcdWriteData(arry[32]);
 	 LcdWriteData(arry[33]);
	 LcdWriteData(arry[34]);
	 LcdWriteData(arry[35]);
	 LcdWriteData(arry[36]);
	 LcdWriteData(arry[37]);
	 LcdWriteData(arry[38]);
	 LcdWriteData(arry[39]);
	 LcdWriteData(arry[40]);
 	 LcdWriteData(arry[41]);
	 LcdWriteData(arry[42]);
	 LcdWriteData(arry[43]);
	 LcdWriteData(arry[44]);
	 LcdWriteData(arry[45]);
	 LcdWriteData(arry[46]);
	 LcdWriteData(arry[47]);
   while(1);
 
  }
}