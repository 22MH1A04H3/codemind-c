#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,s=0,r;
    scanf("%d",&n);
    sq=pow(n,2);
    for(s=0;sq>0;sq=sq/10)
    {
        r=sq%10;
        s+=r;
        //s=s+r;
    }
        if(s==n)
        {
            printf("Neon Number");
        }
        else
        {
            printf("Not Neon Number");
        }
    
    
}