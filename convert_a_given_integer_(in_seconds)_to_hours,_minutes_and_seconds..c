#include<stdio.h>
int main()
{
    int s,h,m,sec;
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec-(3600*h))/60;
    s=sec%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
    return 0;
}