#include <stdio.h>

int main(){
	int number,mod,ifExist;
	printf("введите число\n");
	scanf("%i",&number);
	while(number > 0){
		if(number%2==1){
			ifExist++;
		}
		number/=10;
	}
	if(ifExist>=1){
		printf("TRUE\nколичество нечётных цифр - %i\n",ifExist);
	}
	else{
		printf("FALSE\n");
	}
}
