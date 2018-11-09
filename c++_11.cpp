#include<stdio.h>

//Faktöriyel alma

int main(){
	
	int i;
	int toplam=0;
	int deger,carpim;
	
	printf("Deger girin:");
	scanf("%d" ,&deger);
	
	for(i=1; i<=deger; i++){
		
		carpim = carpim*i;
		
		printf("%d!=%d \n",i, carpim);
		
	}
}
