
#include "header.h"

//年月日期转化为天数



int fun(int x,int y)
{
    int t;
    if(x==1)
    {
        t=y;
    }
    else if(x==2)
    {
        t=31+y;
    }
    else if(x==3)
    {
        t=31+28+y;
    }
    else if(x==4)
    {
        t=31+28+31+y;
    }
    else if(x==5)
    {
        t=31+28+31+30+y;
    }
    else if(x==6)
    {
        t=31+28+31+30+31+y;
    }
    else if(x==7)
    {
        t=31+28+31+30+31+30+y;
    }
     else if(x==8)
    {
        t=31+28+31+30+31+30+31+y;
    }
     else if(x==9)
    {
        t=31+28+31+30+31+30+31+31+y;
    }
    else if(x==10)
    {
        t=31+28+31+30+31+30+31+31+30+y;
    }
     else if(x==11)
    {
        t=31+28+31+30+31+30+31+31+30+31+y;
    }
    else if(x==12)
    {
        t=31+28+31+30+31+30+31+31+30+31+30+y;
    }
    return t;
}
