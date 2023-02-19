#include<stdio.h>

int Area (int a, int b )
{
    int are;
    are= a*b;
    printf(" Area is: %d \n", are);
    return are;
}

int Squire(int a)
{
    int squ;
    squ=a*a;
    printf("Squire is:  %d \n", squ);
    return squ;
}
int Circle(int r)
{
    float pi=3.1416;
    float cir= pi*(r*r);
    printf("Circle is:  %.2lf \n", cir);
    return cir;

}
int Triangle(int a, int b)
{
    float tri=a*b/2;
    printf("Triangle is:  %.2lf", tri);
    return tri;
}
int main()
{
    int k,a,b,r,h;
    printf("Type 1 for Area: \n");
    printf("Type 2 for Squire: \n");
    printf("Type 3 for Circle: \n");
    printf("Type 4 for Triangle: \n");
    printf("Type your kye:");
    scanf("%d", &k);

    if(k==1)
    {
        printf(" Enter length and width: \n");
        scanf("%d %d", &a,&b);
        Area(a,b);
    }
    else if(k==2)
    {
        printf(" Enter length: \n");
        scanf("%d", &a);
        Squire(a);
    }
    else if(k==3)
    {
        printf(" Enter radius: \n");
        scanf("%d", &r);
        Circle(r);
    }
    else if(k==4)
    {
        printf(" Enter Base and  Height: \n");
        scanf("%d %d", &b,&h);
        Triangle(b,h);
    }
}

