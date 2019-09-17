#include <stdio.h>

int main(){
	int n1,n2,n3;
	scanf("%i%i%i",&n1,&n2,&n3);
	int positive=0, negative=0;
	n1 < 0 ? negative++ : positive++;
	n2 < 0 ? negative++ : positive++;
	n3 < 0 ? negative++ : positive++;
	printf("отрицательных - %i | положительных - %i\n",negative, positive);
}
