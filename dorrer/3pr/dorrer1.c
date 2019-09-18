#include <stdio.h>

int main(){
	int k,tmp=-1,max,first;
	printf("введите число k: ");
	scanf("%i",&k);
	printf("введите набор чисел\n");
	while(tmp!=0){
		scanf("%i",&tmp);
		if(first == 0){
			first=tmp;
		}
		if(tmp > max){
			max=tmp;
		}
	}
	if(max > k){
		printf("первое число в наборе - %i\n",first);
	}
	else{
		printf("не найдено\n");
	}
}
