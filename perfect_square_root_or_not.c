#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    float b;
    scanf("%d",&n);
    b=sqrt(n);
    a=b;
    if(b==a)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}