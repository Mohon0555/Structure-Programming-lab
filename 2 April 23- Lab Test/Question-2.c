#include<stdio.h>

int main ()
{
    int ara[11]= {2,3,4,4,6,4,5,5,6,9,9};
    int src;
    scanf("%d", &src);
    int i,c=0;

    for(i=0; i<=10; i++)
    {
        if(src==ara[i])
            c++;
    }
    printf("%d", c);
}
