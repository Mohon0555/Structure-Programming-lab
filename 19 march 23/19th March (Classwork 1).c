#include<stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter Row:");
    scanf("%d", &r);
    printf("Enter Column:");
    scanf("%d", &c);

    int ara[r][c];

    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }

    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<c; i++)
    {
        int max=ara[0][i];
        for(j=0; j<r; j++)
        {

            if(max < ara[j][i])
            {
                max=ara[j][i];
            }
        }
        printf("Max of colum %d is %d", i,max);
        printf("\n");
    }

    for(i=0; i<c; i++)
    {
        int max=ara[0][i];
        for(j=0; j<r; j++)
        {

            if(max < ara[j][i])
            {
                max=ara[j][i];
            }
        }
        j--;
        printf("index of max value in colum %d is [%d][%d]", i,j,i);

        printf("\n");
    }

    return 0;
}
