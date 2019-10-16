#include <stdio.h>

int main(){
    int mas[20], sizeOfArray=1, i=0, buffer;
    do{
        printf("введите чётное число для массива\n");
        scanf("%i",&sizeOfArray);
    }while(sizeOfArray%2 != 0);
    for(; i<sizeOfArray; i++){
        printf("введите число #%i\n",i+1);
        scanf("%i",&mas[i]);
    }
    for(i=0; i<sizeOfArray; i+=2){
        printf("[%i]%i [%i]%i ",i,mas[i],i+1,mas[i+1]);
        buffer=mas[i];
        mas[i]=mas[i+1];
        mas[i+1]=buffer;
        printf("<> [%i]%i [%i]%i\n",i,mas[i],i+1,mas[i+1]);
    }
}