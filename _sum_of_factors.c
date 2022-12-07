#include<stdio.h>
int main()
{
    int n,i,x,s=0;
    scanf("%d",&x);
    n=x;
    for(i=1;i<=n;i++)
    {
    if(x%i==0&&x!=i)
     {
        s=s+i;
     }
    }
    printf("%d",s);
    return 0;
}