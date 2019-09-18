#include <stdio.h>

int main(){
	int age;
	scanf("%i",&age);
	switch(age / 10){
		case 2:{
			printf("двадцать ");
			break;
		}
		case 3:{
			printf("тридцать ");
			break;
		}
		case 4:{
			printf("сорок ");
			break;
		}
		case 5:{
			printf("пятьдесят ");
			break;
		}
		case 6:{
			printf("шестьдесят ");
			break;
		}
	}
	switch(age % 10){
		case 1:{
			printf("один год\n");
			break;
		}
		case 2:{
			printf("два года\n");
			break;
		}
		case 3:{
			printf("три года\n");
			break;
		}
		case 4:{
			printf("четыре года\n");
			break;
		}
		case 5:{
			printf("пять лет\n");
			break;
		}
		case 6:{
			printf("шесть лет\n");
			break;
		}
		case 7:{
			printf("семь лет\n");
			break;
		}
		case 8:{
			printf("восемь лет\n");
			break;
		}
		case 9:{
			printf("девять лет\n");
			break;
		}
	}
}
