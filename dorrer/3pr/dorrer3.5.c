#include <stdio.h>

int main(){
	int number,degree=0;
	printf("введите число\n");
	scanf("%i",&number);
	while(number > 1){
		number/=2;
		degree++;
	}
	printf("введённое число равно 2 в степени %i\n",degree);
}
