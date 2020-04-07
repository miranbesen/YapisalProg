#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void tahmin_oyun(int bulunacak){
	int tahmin;
	int devamCikisKontrol;
	while(1){
		printf("lutfen tahmin edeceginiz sayiyi giriniz=");
		scanf("%d",&tahmin);
		if(bulunacak>tahmin){
			printf("lutfen daha buyuk tahmin yap\n");
		}
		else if(bulunacak<tahmin){
			printf("lutfen daha kucuk tahmin yap\n");
		}
		else{
			printf("Tebrikler bildiniz =)\n");
			printf("(Cikmak icin:{-1}<---->Devam etmek icin:{1})'i giriniz=");
			scanf("%d",&devamCikisKontrol);
			if(devamCikisKontrol==1){
				continue;
			}
			else if(devamCikisKontrol==-1){
				
				break;
			}
			else{
				printf("hatali devam cikis numarasi lutfen (-1 veya 1 degerini girin) otomatik devam edicektir...\n");
				continue;
			}
			}
			}
		   
		}
	


int main(int argc, char *argv[]) 
{
	int bulunacak=rand(); //bulunacak sayi degeri=41'dir.
	//printf("%d",bulunacak);
	
	tahmin_oyun(bulunacak);
	
	return 0;
}


