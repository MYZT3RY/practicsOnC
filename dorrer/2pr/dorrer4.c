#include <stdio.h>

int main(){
	int month;
	scanf("%i",&month);
	switch(month){
		case 1:{
			printf("январь - (31 день)\n");
			break;
		}
		case 2:{
			printf("февраль - (28 дней)\n");
			break;
		}
		case 3:{
			printf("март - (31 день)\n");
			break;
		}
		case 4:{
			printf("апрель - (30 дней)\n");
			break;
		}
		case 5:{
			printf("май - (31 день)\n");
			break;
		}
		case 6:{
			printf("июнь - (30 дней)\n");
			break;
		}
		case 7:{
			printf("июль - (31 день)\n");
			break;
		}
		case 8:{
			printf("август - (31 день)\n");
			break;
		}
		case 9:{
			printf("сентябрь - (30 дней)\n");
			break;
		}
		case 10:{
			printf("октябрь - (31 день)\n");
			break;
		}
		case 11:{
			printf("ноябрь - (30 дней)\n");
			break;
		}
		case 12:{
			printf("декабрь - (31 дней)\n");
			break;
		}
	}
}
