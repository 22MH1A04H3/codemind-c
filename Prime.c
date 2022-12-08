#include<stdio.h>
int main()
{
    int n,i,s=0,m=0;
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    if(n%i==0)
    {
        printf("Not Prime");
        s=1;
        break;
    }
    if(n%i!=0)
    {
        printf("Prime");
    }
    return 0;
}