#include "header.h"

//���ݳ�γ�������Ȧ�ͳ���Ľ��������ڵصľ��Ȳ�������ʱ���

double time(double angle,int t)
{
    double sunrise;
    int t1=80,t2=173,t3=266,t4=356;
    if(t>=t1&&t<t3)
    {
        sunrise=6-angle*24/(2*pai);
    }
    else if(t>=t3&&t<=365)
    {
        sunrise=angle*24/(2*pai)-6;
    }
    else if(t>=0&&t<t1)
    {
        sunrise=angle*24/(2*pai)-6;
    }
    return fabs(sunrise);

}
