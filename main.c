#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"



int main()
{
    int month,day;
    double N,E;
    printf("���������ڼ�����޹��ڸ��أ�4.25��N-53.5��N��73.0��E-135.0��E�����ճ�����ʱ�估�糤ʱ��\n���ڳ�����Ӱ�ʹ������̫����������Լ�������������������ʵ�������һ��ƫ��\n\n");
    printf("���������ѯ�ĵط��ľ�γ��\n���籱���ľ�γ��Ϊ39��54��24��N 116��23��51��E����������39.9 116.38\n");
    scanf("%lf%lf",&N,&E);
    if(N>=53.5||N<=4.25||E<=73||E>=135)
    {
        printf("���ڸó���ɲ�ѯ��Χ��");
        return 0;
    }
    printf("���������ѯ������\n����12��24��  12.24  �·�����֮���Ե�ָ�\n");
    scanf("%d.%d",&month,&day);
    int t;
    t=fun(month,day);
    double chiwei;
    chiwei=suanchiwei(t);
    double angle;
    angle=asin(tan(chiwei)*tan(N*2*pai/360));
    double sunrise,sunset;
    sunrise=time(angle,t);
    double daytime;
    daytime=2*(12-sunrise);
    if(E>=120)
    {
        sunrise+=(E-120)*24/360*1.0;
    }
    else if(E<120)
    {
        sunrise-=(120-E)*24/360*1.0;
    }
    printf("�ճ�ʱ�� %02d:%02d\n",(int)sunrise,(int)(60*(sunrise-(int)sunrise)));
    sunset=24-sunrise;
    printf("����ʱ�� %02d:%02d\n",(int)sunset,(int)(60*(sunset-(int)sunset)));
    printf("�糤      %.2lfСʱ\n",daytime);
    return 0;
}



