#include <stdio.h>
#include<locale.h>//türkçe karakter sýkýntýsý olmamasý için

int main(){
	setlocale(LC_ALL, "Turkish");//türkçe karakter sýkýntýsý olmamasý için
	
	int kere,sayac=1,en_kucuk, sayi;

printf("kaç sayý gireceksiniz?\n");//kullanýcýdan döngü sayýsý alýnýyor
scanf("%d",&kere);


while(kere>=1){
	
	if(sayac==1){//ilk girilen sayý en küçük deðere atanacak
		printf("%d. sayýyý gir:", sayac);
		scanf("%d",&en_kucuk);
	}
	else{//sonradan girilen sayýlar sayi deðiþkenine atanacak
		printf("%d. sayýyý gir:", sayac);
		scanf("%d",&sayi);	
	}		
		
	if(sayi<en_kucuk)//sonradan girilen sayýlarýn içinde en_kucuk deðerden küçük olaný varsa deðiþim yapýlacak
		en_kucuk=sayi;
	
	kere--;
	sayac++;
}


printf("girdiðiniz sayýlarýn en kücüðü: %d", en_kucuk);
	
	
}
