#include<stdio.h>
int main()
{
    int m,h,s;
    scanf("%d",&m);
    h=m/60;
    s=m%60;
    printf("%d Hour(s) %d Minute(s)",h,s);
    return 0;
}