#include<stdio.h>
int main()
{
    int sp,cp;
    scanf("%d%d",&sp,&cp);
    if(cp>sp)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
    return 0;
}