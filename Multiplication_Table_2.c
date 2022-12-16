#include<stdio.h>
int main()
{
    int i,n,m,r;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        r=n*i;
    printf("%d x %d = %d
",n,i,r);
    }
    return 0;
}