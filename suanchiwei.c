
#include "header.h"
//计算当天的赤纬


double suanchiwei(int t)
{
    double chiwei,temp;
    int t1=80,t2=173,t3=266,t4=356;
    if(t>=t1&&t1<t2)
    {
        temp=sin(2*pai*(t-t1)/365*1.0)*sin(23.44*2*pai/360*1.0);
        chiwei=asin(temp);
    }
    else if(t>=t2&&t<t3)
    {
        temp=sin(2*pai*(t3-t)/365*1.0)*sin(23.44*2*pai/360*1.0);
        chiwei=asin(temp);
    }
    else if(t>=t3&&t<t4)
    {
        temp=sin(2*pai*(t-t3)/365*1.0)*sin(23.44*2*pai/360*1.0);
        chiwei=asin(temp);
    }
    else if(t>=t4&&t<=365)
    {
        temp=sin(2*pai*(365-t+t1)/365*1.0)*sin(23.44*2*pai/360*1.0);
        chiwei=asin(temp);
    }
    else if(t>=0&&t<t1)
    {
        temp=sin(2*pai*(t1-t)/365*1.0)*sin(23.44*2*pai/360*1.0);
        chiwei=asin(temp);
    }
    return chiwei;
}
