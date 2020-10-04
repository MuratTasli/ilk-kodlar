/*KENAR1, KENAR2 YADA HÝPOTENÜSÜ 500 DEN BÜYÜK OLMAYAN TÜM DİK ÜÇGENLERÝ BULMA*/
#include<stdio.h>

int main(){

int side1, side2,hypotenuse;

for(side1=1;side1<=500;side1++){
	
	for(side2=1;side2<=500;side2++){
		hypotenuse=(pow(side1,2)+pow(side2,2));
		if(hypotenuse<=500)
			printf("%d\t%d\t%d\n",side1,side2,hypotenuse);
		
		else
			break;
	}
}

return 0;
}
