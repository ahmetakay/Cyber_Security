#include<stdio.h>
#include<math.h>

//Switch- Case Yapýsý ile Alan Hesaplama

int main()
{

char type;
float a;
float b;

         
		 printf("Hesaplamak istedediginiz degeri (ucgen, dikdortgen, daire) a, b deðerlerini giriniz: ");
		 
		 scanf("%c %f %f", &type, &a, &b);
		 
		 
		 switch(type){
		 	
		 	case 'u':
		 	  printf("Alan a*b/2=%f", a*b/2);
		 	  break;
		 	  
		 	case 'd':
		 	  printf("Alan a*b=%f", a*b);
		 	  break;
		 	  
		 	case 'c':
		 	  printf("Alan pi*a^2=%f", 3.14*pow(a,2));
		 	  break;
		 	  
		 }
		 	  
}
	
