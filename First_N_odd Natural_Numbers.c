#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    printf("%d ",(i*2)-1);
    return 0;
    
}