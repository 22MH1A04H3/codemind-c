#include<stdio.h>
int main()
{
    int m,n,o=0,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0&&i%3==0)
        {
            o++;
        }
        
    }
    printf("%d",o);
}