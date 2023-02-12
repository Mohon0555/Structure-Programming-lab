#include<stdio.h>
int main()
{

    int trail=0;
    int found=0;
    int a;
    int b=909;

    while(trail<5 && found==0)
    {
        scanf("%d",&a);

        if(a<b)
        {
            printf("Try higher number \n");
        }
        else if (a>b)
        {
            printf("Try lower number \n");
        }
        else if (a==b)
        {
            found==1;
            printf("You guessed the right number");
        }
        else
            trail++;
    }
    printf("try again");

}
