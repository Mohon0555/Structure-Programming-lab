#include<stdio.h>

int DigitCount(int digit)
{
    int len=0;
    do
    {
        digit/=10;
        len++;
    }
    while(digit!=0);
    printf("%d", len);
    return len;
}
int main()
{
    int digit;
    int len=0;
    scanf("%d", &digit);
    DigitCount(digit);
}
