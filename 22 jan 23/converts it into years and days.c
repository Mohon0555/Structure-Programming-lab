#include<stdio.h>
int main(){


int n,y,d;

scanf("%d", &n);
y=(n/365);
d=(n/y);
printf("%d Years %d Days", y, d);
return 0;
}
