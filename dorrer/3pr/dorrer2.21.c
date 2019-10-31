#include <stdio.h>

int main(){
	int valueOfValues,summaryOfValues,tmp,maxValue,minValue,maxRepeats=1,minRepeats=1;
	float average;
	printf("введите количество чисел\n");
	scanf("%i",&valueOfValues);
	for(int i=0; i<valueOfValues; i++){
		printf("введите число #%i\n",i+1);
		scanf("%i",&tmp);
		if(tmp > maxValue){
			if(tmp > maxValue && maxRepeats != 1){
				maxRepeats=1;
			}
			else{
				maxRepeats++;
			}
			maxValue=tmp;
		}
		if(tmp < minValue){
			if(tmp < minValue && minRepeats != 1){
				minRepeats=1;
			}
			else{
				minRepeats++;
			}
			minValue=tmp;
		}
		summaryOfValues+=tmp;
	}
	printf("minR - %i ; maxR - %i\n",minRepeats,maxRepeats);
	printf("числа %i(max) и %i(min) удалены\n",maxValue,minValue);
	average=(summaryOfValues-(minValue*minRepeats)-(maxValue*maxRepeats))/(valueOfValues-(1*maxRepeats)-(1*maxRepeats));
	printf("сумма чисел - %i; среднее - %.01f\n",summaryOfValues-(minValue*minRepeats)-(maxValue*maxRepeats),average);
}
