#include <stdio.h>
#include<locale.h>//t�rk�e karakter s�k�nt�s� olmamas� i�in

int main(){
	setlocale(LC_ALL, "Turkish");//t�rk�e karakter s�k�nt�s� olmamas� i�in
	
	int kere,sayac=1,en_kucuk, sayi;

printf("ka� say� gireceksiniz?\n");//kullan�c�dan d�ng� say�s� al�n�yor
scanf("%d",&kere);


while(kere>=1){
	
	if(sayac==1){//ilk girilen say� en k���k de�ere atanacak
		printf("%d. say�y� gir:", sayac);
		scanf("%d",&en_kucuk);
	}
	else{//sonradan girilen say�lar sayi de�i�kenine atanacak
		printf("%d. say�y� gir:", sayac);
		scanf("%d",&sayi);	
	}		
		
	if(sayi<en_kucuk)//sonradan girilen say�lar�n i�inde en_kucuk de�erden k���k olan� varsa de�i�im yap�lacak
		en_kucuk=sayi;
	
	kere--;
	sayac++;
}


printf("girdi�iniz say�lar�n en k�c���: %d", en_kucuk);
	
	
}
