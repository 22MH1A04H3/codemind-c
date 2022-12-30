#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],s=0,t,i;
    scanf("%d",&n);
    t=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i]*pow(2,t);
        t--;
    }
    printf("%d",s);
}