#include<stdio.h>
//En b�y�k olan� bulma
int main(void){
	
	int a,b,c;
	
	printf("a,b ve c degeri giriniz: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b && a > c){
		printf("a buyuk");
	}else if (b > c){
		printf("b buyuk");
	}else{
		printf("c buyuk");
	}
	getchar();
	
   }
