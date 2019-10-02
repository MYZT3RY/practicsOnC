#include <stdio.h>

int main(){
	int valueOfValues,summaryOfValues,tmp,maxValue,minValue;
	float average;
	printf("введите количество чисел\n");
	scanf("%i",&valueOfValues);
	for(int i=0; i<valueOfValues; i++){
		printf("введите число #%i\n",i+1);
		scanf("%i",&tmp);
		if(tmp > maxValue){
			maxValue=tmp;
		}
		if(tmp < minValue){
			minValue=tmp;
		}
		summaryOfValues+=tmp;
	}
	printf("числа %i(max) и %i(min) удалены\n",maxValue,minValue);
	average=(summaryOfValues-minValue-maxValue)/(valueOfValues-2);
	printf("сумма чисел - %i; среднее - %.01f\n",summaryOfValues-minValue-maxValue,average);
}
