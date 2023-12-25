#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"



int main()
{
    int month,day;
    double N,E;
    printf("本程序用于计算仅限国内各地（4.25°N-53.5°N，73.0°E-135.0°E）的日出日落时间及昼长时间\n由于晨昏蒙影和大气层对太阳光的折射以及当天天气情况，结果与实际情况有一定偏差\n\n");
    printf("输入你想查询的地方的经纬度\n例如北京的经纬度为39°54′24″N 116°23′51″E，可以输入39.9 116.38\n");
    scanf("%lf%lf",&N,&E);
    if(N>=53.5||N<=4.25||E<=73||E>=135)
    {
        printf("不在该程序可查询范围内");
        return 0;
    }
    printf("输入你想查询的日期\n例如12月24日  12.24  月份与日之间以点分隔\n");
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
    printf("日出时间 %02d:%02d\n",(int)sunrise,(int)(60*(sunrise-(int)sunrise)));
    sunset=24-sunrise;
    printf("日落时间 %02d:%02d\n",(int)sunset,(int)(60*(sunset-(int)sunset)));
    printf("昼长      %.2lf小时\n",daytime);
    return 0;
}



