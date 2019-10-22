#include <stdio.h>

int main(){
	int k,tmp,max,nr,i=0;
	printf("введите число k: ");
	scanf("%i",&k);
	printf("введите набор чисел\n");
	do{
		scanf("%i",&tmp);
		if(tmp > max){
			max=tmp;
			nr=i+1;
		}
		i++;
	}while(tmp != 0);
	if(max > k){
		printf("первое число в наборе > k - %i\n",nr);
	}
	else{
		printf("не найдено\n");
	}
}
