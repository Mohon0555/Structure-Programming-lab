#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n>50)
    {
        if(n%2==1)
        {
            printf("A");
        }
        else
        {
            printf("B");
        }
    }

else
{
    printf("C");
}
return 0;
}

