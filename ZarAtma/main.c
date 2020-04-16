#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int zarAt(){
	return rand()%6+1;
}


int main(int argc, char *argv[]) 
{
	srand(time(NULL)); 	
	int zar1,zar2;
	int zarTop=0;
	int puan=0;
	zar1=zarAt();
	zar2=zarAt();
	zarTop=zar1+zar2;
	
	if(zarTop==7 || zarTop==11){
		printf("kazandin0");
	}
	else if(zarTop==2 || zarTop==3 || zarTop==12){
		printf("kaybettin0");
	}
	else{
		puan=zarTop;
		zar1=zarAt();
		zar2=zarAt();
		zarTop=zar1+zar2;
		
		if(zarTop==puan){
			printf("kazandin1\n");
		}
		else{
		
		while(zarTop!=puan){
		if(zarTop==7){
			printf("kaybettiniz1\n");
		break;
		}
		if(zarTop==8)
	{
	printf("kazandiniz2\n");
	break;	
	}
		else{
		zar1=zarAt();
		zar2=zarAt();
		zarTop=zar1+zar2;
		
			
		}
			
	}	
		
		
	}
	}
	
	return 0;
}
