#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int i, besleme;
/*
printf("please enter a feed:");//srand fonkunu surekli besleyerek rand fonkunun farkli degerler uretmesini saglamis oluruz.
scanf("%d", &besleme);

srand(besleme);
i=rand();
*/


//eger suerkli besleme yapmak istemiyorsak ;

srand(time(NULL));
i=rand()%100;

printf("random sayinin degeri: %d",i);


















    return 0;

}