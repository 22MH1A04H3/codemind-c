#include<stdio.h>
int main()
{
    float a,s,v;
    scanf("%f",&a);
    s=6*(a*a);
    v=a*a*a;
    printf("Surface area = %.0f and Volume = %.0f",s,v);
    return 0;
}