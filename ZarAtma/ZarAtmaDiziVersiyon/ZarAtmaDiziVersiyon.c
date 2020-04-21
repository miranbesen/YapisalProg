#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	srand(time(NULL));
	int frekans[6]={0};
	fonk(frekans);
	return 0;
	
}
int zarAt(){
	return rand()%6+1;
}

void fonk(int d[]){
	
	int i;
	for (i=0;i<5;i++){
		switch(zarAt()){
			case 1: d[0]++;
			break;
			case 2: d[1]++;
			break;
			case 3: d[2]++;
			break;
			case 4: d[3]++;
			break;
			case 5: d[4]++;
			break;
			case 6: d[5]++;
			break;
		}
	}
	
	for(i=0;i<6;i++)
	{
		if(d[i]==0)
		continue;
		printf("\n%d sayisindan %d kadar gelmistir",i,d[i]);
	}	
	
}
