#include <stdio.h>

int faktorial(int);//fonksiyonun prototipi belirtildi.

int main(){

    int fact;//faktoriyeli alinacak sayiyi tutacak degisken.

    printf("faktoriyelini almak istediginiz sayiyi giriniz:\n");
    scanf("%d",&fact);

    printf("%d sayisinin faktoriyeli: %d",fact, faktorial(fact));//





    return 0;
}


int faktorial(int x){

    if (x==1)//fonksiyon temel duruma ulasinca 1 dondurulerek fonksiyondan cikilir.
        return 1;

    return x*faktorial(x-1);//fonksiyon kendisini biraz daha basit bir versiyonuyla cagiriyor. bu dongu temel duruma ulasilincaya kadar devam eder.
}

