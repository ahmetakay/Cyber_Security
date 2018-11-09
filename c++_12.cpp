#include<stdio.h>

//While

int main(){
	
	int i,deger;
	int toplam=0;
	//i=1;
	
	printf("Deger girin:");
	scanf("%d" ,&deger);
	
	while(0<deger){
		
		toplam = toplam+deger*deger;
		printf("%d+",deger*deger);
		deger--;
	}
	printf("-->toplam=%d \n", toplam);
}
