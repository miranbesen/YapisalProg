#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void Ay_Gun_Say(int ayNum){
	
	switch(ayNum){
		case 1:
			printf("Ocak ayi(1.ay) 31 gunden olusur");
			break;
			case 2:
				printf("Subat ayi(2.ay) 28 gunden olusur");
				break;
				case3:
					printf("Mart ayi(3.ay) 31 gunden olusur");
					break;
					case 4:
						printf("Nisan ayi(4.ay) 30 gunden olusur");
						break;
						case 5:
							printf("Mayis ayi(5.ay) 31 gunden olusur");
							break;
							case 6:
								printf("Haziran ayi(6.ay) 30 gunden olusur");
								break;
								case 7:
									printf("Temmuz ayi(7.ay) 31 gunden olusur");
									break;
									case 8:
										printf("Agustos ayi(8.ay) 31 gunden olusur");
										break;
										case 9:
											printf("Eylul ayi(9.ay) 30 gunden olusur");
											break;
											case 10:
												printf("Ekim ayi(10.ay) 31 gunden olusur");
												break;
												case 11:
													printf("Kasim ayi(11.ay) 30 gunden olusur");
													break;
													case 12:
														printf("Aralik ayi(12.ay) 31 gunden olusur");
														break;
														default:
															printf("Hatali deger girdiniz lutfen {1-12} arasi deger giriniz");
															
	}
	
	
		
}
int main(int argc, char *argv[]) {
	
	int ayNum;
	
	

	printf("Lutfen ay numarasi giriniz=");
	scanf("%d",&ayNum);
	
	while(1){
		if(ayNum<1 || ayNum>12){
			printf("Hatali ay numarasi, lutfen tekrar giriniz");
			scanf("%d",&ayNum);
		}
		else{
		
	        break;
		}
	}
	
	Ay_Gun_Say(ayNum);
	

	return 0;
}


