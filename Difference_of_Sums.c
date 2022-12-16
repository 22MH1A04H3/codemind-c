#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,c=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       s=s+(i*i); 
    }
    for(i=1;i<=n;i++)
    {
        c=c+i;
    }
    k=pow(c,2);
    printf("%d",k-s);
    return 0;
}