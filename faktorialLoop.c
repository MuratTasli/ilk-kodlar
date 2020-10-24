#include <stdio.h>

int factorial(int);//fonk prototipi belirtildi.

int main(){

    int fact;//faktoriyeli alinacak sayi

    printf("faktoriyelini almak istediginiz sayi nedir?\n");
    scanf("%d",&fact);

    printf("%d sayisinin faktoriyeli: %d",fact, factorial(fact));

    return 0;
}

int factorial(int x){

    int sayi=1;

    for(;x>=1;x--)
        sayi*=x;


    return sayi;
}