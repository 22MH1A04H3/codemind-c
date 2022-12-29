#include<stdio.h>
int main()
{
    int n,i,a[n],max,s=0,av,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    av=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=av)
        {
            c++;
        }
        
    }
    printf("%d",c);
}