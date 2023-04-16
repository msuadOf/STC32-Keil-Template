#include "STC32G.h"

void main(){

 WTST = 0;  //设置程序指令延时参数，赋值为0可将CPU执行指令的速度设置为最快
    EAXFR = 1; //扩展寄存器(XFR)访问使能
    CKCON = 0; //提高访问XRAM速度
	
	P2M1 = 0x00;   P2M0 = 0x00;
	P20=0;
	
	while(1);
}