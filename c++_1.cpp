#include <stdio.h>
#include <math.h>
#include <iostream>

/* Switch - Case Yap�s� ile Not Hesaplama */

// E�er Puan 0'dan K���k ve 100'den B�y�k De�ilse Switch-Case Yap�s�n� �al��t�r.


int main ()
{

    int puan;

       printf("Puan degerini giriniz: ");

       scanf("%d" ,&puan);
       
       if(!(puan < 0) && !(puan >100)) {
       	
       	switch (puan/10){
       		
       		case 10:
       			printf("Durum A++");
       			break;
       			
       		case 9:
       			printf("Durum A+");
       			break;
       		
			case 8:
			    printf("Durum A");
			    break;
			    
			case 7:
			    printf("Durum B");
			    break;
			    
			case 6:
			    printf("Durum C");
			    break;
			    
			case 5:
				printf("Durum D");
				break;
				
			default:
				printf("Durum F");
				break;
				}
		   }
		   
		   	else {
		    printf("Girdiginiz degeri tekrar kontrol ediniz.");
	}	

	   }

