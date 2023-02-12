#include<stdio.h>
int main()
{
    int i,j,sum=0,asum=0;
    for(i=1; i<=5; i++)
    {
        sum=sum+i;
        printf("%d ", sum);
        asum=asum+sum;
    }
    printf("%d", asum);
    return 0;
}
