#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	printf("1.inci matrisin elemanlari:\n");
	matris_yap(m1);
	printf("2.inci matrisin elemanlari:\n");
	matris_yap(m2);
	matris_top(m1,m2,m3);	
	printf("sonuc matris elemanlari:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",m3[i][j]);
		}
	printf("\n");
	}
	
	return 0;
}




void matris_yap(int d[3][3]){
	
	int i,j;
	
	for(i=0;i<3;i++){
	
		for(j=0;j<3;j++){
			printf("%d.satir %d.eleman degerini giriniz=",i,j);
			scanf("%d",&d[i][j]);	
		}
	}
}

void matris_top(int d1[3][3],int d2[3][3],int d3[3][3]){
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			d3[i][j]=d1[i][j]+d2[i][j];
			
		}
	}
		
}
