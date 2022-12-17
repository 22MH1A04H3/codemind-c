#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    while(m!=n)
    {
        if(m>n)
        m-=n;
        else
        n-=m;
    }
    printf("%d",m);
    return 0;
}