#include<stdio.h>

//5 veya 7'ye bölünebilenleri ekrana yazdýr.

int main(){
	
	int deger;

	printf("Deger girin:");
	scanf("%d" ,&deger);
	
	while(0<deger){
		
		if(deger%5==0 || deger%7==0){
			printf("%d \n" ,deger);
		
		}
		deger--;
	}
}
