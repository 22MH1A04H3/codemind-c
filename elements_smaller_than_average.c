#include<stdio.h>
int main()
{
    int n,a[n],s=0,av,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    av=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=av)
        {
            c++;
        }
    }
        printf("%d",c);

}