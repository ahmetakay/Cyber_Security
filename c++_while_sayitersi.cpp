#include<stdio.h>

	int main(){
		
		int kalan, n;
		printf("n degeri=");
		scanf("%d" ,&n);
			while(n>0){
				kalan=n%10;
				printf("%d",kalan);
				n=(n-kalan)/10;
				}
}
