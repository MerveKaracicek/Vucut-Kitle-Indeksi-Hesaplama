#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Vucut kitle indeksi hesaplama programi:\n");
	
	float boy;
	int kilo;
	printf("Lutfen boy uzunlugunuzu metre cinsinden giriniz:");
	scanf("%f",&boy);
	
	printf("Lutfen kilonuzu giriniz:");
	scanf("%d",&kilo);
	
	float indeks=kilo/(boy*boy);

	if (indeks<=18.5){
		printf("VKI=%f ---> Ideal kilonuzun altindasiniz.",indeks);
	}
	else if (indeks>18.5 && indeks<=24.9){
		printf("VKI=%f ---> Ideal kilonuzdasiniz.",indeks);
	}
	else if (indeks>24.9 && indeks<=29.9){
		printf("VKI=%f ---> Ideal kilonuzun ustundesiniz.",indeks);
	}	
	else if (indeks>29.9 && indeks<=39.9){
		printf("VKI=%f ---> Ideal kilonuzun cok ustundesiniz.(obez)",indeks);
	}
	else{
		printf("VKI=%f ---> Ideal kilonuzun cok cok ustundesiniz.(morbid obez)",indeks);
	}
	
	
	
	
	return 0;
}
