#include <stdio.h>

int main(){
	int lines,maxValue,value,fields;
	printf("введите количество строк на экране\n");
	scanf("%i",&lines);
	maxValue=lines;
	lines*=2;
	while(lines>maxValue){
		for(int i=0; i<6; i++){
			printf("%i ",value+1);
		}
		value++;
		printf("\n");
		lines--;
	}
	while(lines>1){
		for(int i=0; i<6; i++){
			printf("%i ",value-1);
		}
		value--;
		printf("\n");
		lines--;
	}
}
