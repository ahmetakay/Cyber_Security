#include<stdio.h>

//float b�lme

int main(void){
	
	int a,b;
	float c;
	
	printf("a ve b degerini giriniz: ");
	scanf("%d %d" ,&a,&b);
	
	c = (float) a/b;
	printf("c = %.2f" ,c);
	getchar();
	
}
