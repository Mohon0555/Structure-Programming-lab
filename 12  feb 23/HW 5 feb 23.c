#include <stdio.h>
int main()
{
    int sum=0,x;
    printf("Enter a number :\n ");
    while(x != -1)
    {
        scanf("%d",&x);
        sum=(sum+x);
    }
    printf("Sum of the entered  numbers : %d ", sum+1);
    return 0;
}
