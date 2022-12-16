#include<stdio.h>
int main()
{
    int i,x,m,n,r;
    scanf("%d%d%d",&x,&m,&n);
    for(i=m;i<=n;i++)
   
   {
       r=x*i;
    printf("%d x %d = %d
",x,i,r);
   }
}