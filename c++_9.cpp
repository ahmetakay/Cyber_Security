#include<stdio.h>

int main(){
	
	int yas;
	
	printf("Yas degerini giriniz = ");
	scanf("%d",&yas);
	
	if(yas > 0){
	
	if(yas < 18){
		printf("Sanslisiniz");
	
	}else if (yas < 65){
		printf("Gencsiniz ");
	
	}else if(yas > 65){
		printf("Tatil Zamani");
	
	}

	}else{
	printf("Yas 0 veya 0'dan kucuk olamaz");
	}
    sgetchar();
}
