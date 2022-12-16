#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        r=n*i;
        printf("%d x %d = %d
",n,i,r);
    }
    return 0;
}