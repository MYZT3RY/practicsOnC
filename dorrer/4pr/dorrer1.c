#include <stdio.h>

int main(){
	int lines,number=1;
	printf("введите количество чередующихся строк\n");
	scanf("%i",&lines);
	while(lines > 0){
		while(number < 8){
			printf("%i ",number);
			number++;
		}
		printf("%i\n",number);
		while(number > 1){
			printf("%i ",number);
			number--;
		}
		printf("%i\n",number);
		lines--;
	}
}
