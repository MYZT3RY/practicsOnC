#include <stdio.h>

int main(){
	int value;
	scanf("%i",&value);
	(value%10 != value/100) && (value%10 != value%100/10)?printf("цифры данного трёхначного числа различны\n"):printf("цифры данного трёхзначного числа имеют совпадения\n");
}
