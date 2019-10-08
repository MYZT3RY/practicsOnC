#include <stdio.h>
int main(){
	int value,maxValue,iters;
	printf("введите количество чисел\n");
	scanf("%i",&iters);
	for(int i=0; i<iters; i++){
		do{
			printf("максимальное число - 999\n");
			scanf("%i",&value);
		}
		while(value < 0 || value > 999);
		if((value%10==0)&&(value>maxValue)){
			maxValue=value;
		}
		if(((value/10%10) == (value%10))){
			printf("число %i удалено\n",value);
		}
		else{
			printf("число %i не удалено\n",value);
		}
		printf("деление числа %i на 3 с остатком равно %i\n",value,value%3);
	}
	if(maxValue != 0){
		printf("самое большое число кратное 10 - %i\n",maxValue);
	}
}
