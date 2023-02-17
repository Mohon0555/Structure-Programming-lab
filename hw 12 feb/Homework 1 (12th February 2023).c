#include<stdio.h>
int main()
{
    int i;
    int s,l=1;
    int k,b;

    for(i=1; i<=3; i++)
    {
        for (s=i; s<=3; s++)
        {
            printf(" ");
        }

        for (k=1; k<=2*i-1; k++)
        {
            printf("%d ", l);
            l++;
        }
        printf("\n");

    }
    return 0;
}
