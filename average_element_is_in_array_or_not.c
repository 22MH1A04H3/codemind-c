#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    float a[n],s=0.0,av;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        av=s/n;
    }
    if(n>=av)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}