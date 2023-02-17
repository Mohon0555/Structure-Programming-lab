#include<stdio.h>
int main()
{
    int i;
    int s;
    int k,c,b;
    c=97;
    for(i=5; i>=1; i--)
    {

        for (k=1; k<=i; k++)
        {
            printf("%c", c);
            c++;
        }
        c=97;
        printf("\n");

    }
    return 0;
}
