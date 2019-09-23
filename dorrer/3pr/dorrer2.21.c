#include <stdio.h>

int main(){
	int valueOfValues,summaryOfValues,tmp;
	float average;
	printf("введите количество чисел\n");
	scanf("%i",&valueOfValues);
	for(int i=0; i<valueOfValues; i++){
		printf("введите число #%i\n",i+1);
		scanf("%i",&tmp);
		summaryOfValues+=tmp;
	}
	average=summaryOfValues/valueOfValues;
	printf("сумма чисел - %i; среднее - %f\n",summaryOfValues,average);
}
