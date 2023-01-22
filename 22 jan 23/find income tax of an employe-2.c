#include <stdio.h>

int main () {

int tax,salary=11000;

if (salary > 25000) {
tax = ((salary-25000)*20/100)   + (10000*15/100) + (5000*10/100);
printf("%d",tax);
}

else if (salary > 15000 && salary < 25000 ) {
    tax = ((salary-15000)*15/100) + (5000*10/100);
     printf("%d",tax);

}

else if (salary > 10000 && salary < 15000 ) {
    tax = ((salary-10000)*10/100) ;
     printf("%d",tax);
}
else {
    tax= 0;
    printf("%d",tax);

}



}
