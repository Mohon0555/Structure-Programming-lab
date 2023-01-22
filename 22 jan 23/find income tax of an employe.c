# include<stdio.h>
int main(){
int n,tex,new;
scanf("%d", &n);

if(n>0 && n<=10000){
    tex=0;
    printf("%d", tex);
}
else if( n>10000 && n<=15000){
    tex=((n-10000)/100)*10;
    printf("%d", tex);
}
else if( n>15000 && n<=25000){
   // n=n-10000;
    tex=((n-10000)/100)*10)+();
    printf("%d", tex);
}
else if( n>25000){
    tex=(n/100)*20;
    printf("%d", tex);
}
return 0;
}
