#include<stdio.h>

int main(void){
	int dizi[5];
	for(int i=0; i<5; i++){
		printf("dizinin %d. elemanini giriniz=",i+1);
		scanf("%d",&dizi[i]);
	}
	
	
	int maxx=dizi[0];
	int toplam=0;
	
	for(int i=0; i<5; i++)
	{
		printf("%d. eleman= %d\n",i+1,dizi[i]);
		toplam=toplam+dizi[i];
		
		if(maxx<dizi[i])
		{
			maxx=dizi[i];
		}
		
	}
	printf("\nortalama=%f",(float)toplam/5);
	printf("\nmaksimum=%d",maxx);
}
