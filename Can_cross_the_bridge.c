#include<stdio.h>
void cross();
int main()
{
    cross();
    return 0;
}
void cross()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int a=(z-y)/x;
    printf("%d",a);
    
}