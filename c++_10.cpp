#include<stdio.h>

//Degerleri sýralama
int main(){
	
	int i;
	int toplam=0;
	
	for(i=10; i>=1; i--){
		
		toplam=toplam+i;
		
		printf("%d e kadar toplam=%d \n",i,toplam);
	}
}
