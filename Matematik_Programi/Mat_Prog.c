#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Ad Soyad: Miran Besen || Numara: 190401080

void menuPrintf(void){
	printf("---------------------------------------------------\n");
	printf("\n 1-)Asal sayi olup olmadigini bulma");
	printf("\n 2-)Sayi carpim");
	printf("\n 3-)Sayi kuvveti");
	printf("\n 4-)iki sayiyi toplama");
	printf("\n -1-)cikis\n");
	printf("\n---------------------------------------------------\n");

}


void menuFonksiyon(){
		
	int secim;	
	while(1){	
	menuPrintf();
	printf("seciminizi giriniz:");
	scanf("%d",&secim);
	
	if(secim==1){
	
	int sayi;
	int sonuc;
	printf("Asal olup olmadigini kontrol etmek istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	sonuc=asalSayi(sayi);
	printf("(sayi asal ise 0,degilse 1 demektir)=%d\n",sonuc);
			
	}
	else if(secim==2){
     int sayi1,sayi2;
	 int sonuc2;
	 //printf("Sayilar rastgele uretiliyor, sayi 1'imiz 1 ile 20 arasi (1 ile 20 sayilari dahil), sayi 2'miz 2 ile 100 arasi arasi sayi uretecek(2 ile 100 sayilari dahil)\n");
	 sayi1=rand()%20+1;
	 sayi2=rand()%100+2;
	 printf("rastgele uretilen 1'inci sayimiz=%d\n",sayi1);
	 printf("rastgele uretilen 2'inci sayimiz=%d\n",sayi2);
	sonuc2=sayiCarpim(sayi1,sayi2);
	printf("carpim sonucumuz=%d\n",sonuc2);
	
		
	}
	else if(secim==3)
	{
		
		int taban,kuvvet;
		int sonuc3;
		
		printf("ustunu almak istediginiz sayiyi giriniz:");
		scanf("%d",&taban);
		printf("\ngirmek istediginiz ussu giriniz:");
		scanf("%d",&kuvvet);
		sonuc3=KuvvetFonksiyonu(taban,kuvvet);
		printf("kuvveti alinmis hali=%d\n",sonuc3);
		
		
	}
	else if(secim==4){
		int say1,say2;
		int sonuc4;
	 //printf("Sayilar rastgele uretiliyor, sayi 1'imiz 1 ile 100 arasi (1 ile 100 sayilari dahil), sayi 2'miz 100 ile 200 arasi arasi sayi uretecek(100 ile 200 sayilari dahil)\n");
	 say1=rand()%100+1;
	 say2=rand()%200+100;
	 printf("rastgele uretilen 1'inci sayimiz=%d\n",say1);
	 printf("rastgele uretilen 2'inci sayimiz=%d\n",say2);
	 sonuc4=sayTop(say1,say2);
	 printf("toplam sonucumuz=%d\n",sonuc4);
	 
	 
	}
	else if(secim==-1){
		
		printf("sistemden cikiliyor...\n");		
		break;
	}
	else{
		printf("lutfen cikmak icin -1'e basiniz veya 1-4 arasi secim giriniz\n");
		
	}
				
	}
	
}




int KuvvetFonksiyonu(int sayi1,int sayi2){
	
	if (sayi2==1)
	return sayi1;
	else
	return (sayi1*KuvvetFonksiyonu(sayi1,sayi2-1));	
}
int sayiCarpim(int sayi1,int sayi2){
	
	if (sayi2==1)
	return sayi1;
	else
	return (sayi1+sayiCarpim(sayi1,sayi2-1));	
}
int sayTop(int s1,int s2){
	if (s2==0)
	return s1;
	else 
		return 1+sayTop(s1,s2-1);
	
		
	
}

int asalSayi(int sayi){
	if(sayi==1)
	return 0;
	if(sayi==0)
	return 1;
	else
	return asalSayi(sayi%2); 
}


int main()
{
	srand(time(NULL));
    menuFonksiyon();
	return 0;
}
