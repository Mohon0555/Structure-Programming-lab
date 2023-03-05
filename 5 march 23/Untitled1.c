#include<stdio.h>

int main()
{
    int c [3];
    int i;
    int sum=0,avg=0;

    for(i=0; i<3; i++)
    {

        scanf("%d", &c[i]);

    }
    for(i=0; i<3; i++)
    {

        printf("%d ", c[i]);
        sum=sum+c[i];


    }
    avg=sum/3;
    printf("SUM: %d\n  ", sum);
    printf("AVG: %d\n", avg);

    int max= c[0];
    for(i=0; i<3; i++)
    {

        if(max<c[i+1])
            max= c[i+1];
    }
    printf("Max: %d", max);

    return 0;
}
