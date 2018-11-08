#include<stdio.h>

int main(void){
	
	/*	
	"%d" integer okumak icin 
	"%f"   float okumak icin
	*/
	
	int a;
	float b;
	
	printf("a'nin degerini giriniz: ");
	scanf("%d", &a);
	
	printf("b'nin degerini giriniz: ");
	scanf("%f",&b);
	
	printf("a = %d , b = %f" ,a,b);
	getchar();
	
}
