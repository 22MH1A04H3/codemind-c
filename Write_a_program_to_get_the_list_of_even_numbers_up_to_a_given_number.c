#include<stdio.h>
int main()
{
    int m,n,i,s=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
    printf("%d ",i);
    }
    return 0;
}