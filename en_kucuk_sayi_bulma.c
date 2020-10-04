#include <stdio.h>
#include<locale.h>//türkçe karakter sıkıntısı olmaması için

int main(){
	setlocale(LC_ALL, "Turkish");//türkçe karakter sıkıntısı olmaması için
	
	int kere,sayac=1,en_kucuk, sayi;

printf("kaç sayı gireceksiniz?\n");//kullanıcıdan döngü sayısı alınıyor
scanf("%d",&kere);


while(kere>=1){
	
	if(sayac==1){//ilk girilen sayı en küçük değere atanacak
		printf("%d. sayıyı gir:", sayac);
		scanf("%d",&en_kucuk);
	}
	else{//sonradan girilen sayılar sayi değişkenine atanacak
		printf("%d. sayıyı gir:", sayac);
		scanf("%d",&sayi);	
	}		
		
	if(sayi<en_kucuk)//sonradan girilen sayıların içinde en_kucuk değerden küçük olanı varsa değişim yapılacak
		en_kucuk=sayi;
	
	kere--;
	sayac++;
}


printf("girdiğiniz sayıların en kücüğü: %d", en_kucuk);
	
return 0;	
}
