#include<stdio.h>
#include<math.h>

// Switch - Case ile Birlikte Hesap Makinesi Yapýmý

int main(){
	
	char islem;
	int a;
	int b;
	
	printf("Hesap a?b = ");
	scanf("%d %c %d", &a, &islem, &b);
	
	switch(islem){
		
		case'+':
		   printf("a+b=%d", a+b);
		   break;
		   
		case'-':
		   printf("a-b=%d", a-b);
		   break;
		   
		case'*':
		   printf("a*b=%d", a*b);
		   break;
		   
		case'/':
		   printf("a/b=%d", a/b);
		   break;
		   
		case'%':
		   printf("amodb=%d", a%b);
		   break;
		   
		case'p':
		   printf("a^b=%d", (int)pow(a,b));
		   break;
	}
}
