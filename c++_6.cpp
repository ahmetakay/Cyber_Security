#include<stdio.h>

//harf , ücret ve saat bilgisi verip mesai hesaplar

int main(){
	
	int saat,ucret,maas;
	char isim;
	
	printf("isim , saat ve ucret degerini girniz = ");
	scanf("%c %d %d" ,&isim,&saat,&ucret);
	
	maas = saat*ucret;
	
	printf("%c isimli kisinin maasi =%d" ,isim,maas);
	
	getchar();
}





