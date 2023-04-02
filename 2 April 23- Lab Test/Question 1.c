#include<stdio.h>

int main ()
{
    int i,j,k,r,c;
    scanf("%d %d", &r, &c);
    int ara[r][c];
    int sum_row=0;
    int multi_col=1;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }
    r=r/2;

        for(j=0; j<c; j++)
        {
            sum_row=sum_row+ara[r][j];
        }

    printf("sum of row: %d \n", sum_row);
    r=r*2;
    c=c/2;

    for(k=0; k<=r; k++)
        {
            multi_col=multi_col*ara[k][c];
        }

    printf("Product of colum: %d", multi_col);
return 0;
}
