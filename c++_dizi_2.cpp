#include<stdio.h>
#include<stdlib.h>
#include<time.h>
,
void ortalama(int fdizi[], int boyut){
	int toplam=0;
	float ort;
	for(int i=0; i<boyut; i++)
	toplam=toplam+fdizi[i];
	{
		ort=(float)toplam/boyut;
		printf("\n ortalama= %f",ort);
		
	}
	}
void yazdir(int fdizi[], int boyut){
	for(int i=0; i<boyut; i++){
		printf("dizinin %d. elemani= %d\n",i+1,fdizi[i]);
	}
}
int main(){
	int dizi[50];
	srand(time(NULL));
	for(int i=0; i<50; i++){
		dizi[i]=rand()%50;
	}
	yazdir(dizi,50);
}
