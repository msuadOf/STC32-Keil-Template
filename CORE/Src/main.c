#include "STC32G.h"

void main(){

 WTST = 0;  //���ó���ָ����ʱ��������ֵΪ0�ɽ�CPUִ��ָ����ٶ�����Ϊ���
    EAXFR = 1; //��չ�Ĵ���(XFR)����ʹ��
    CKCON = 0; //��߷���XRAM�ٶ�
	
	P2M1 = 0x00;   P2M0 = 0x00;
	P20=0;
	
	while(1);
}