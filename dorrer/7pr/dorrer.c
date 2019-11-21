#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int array[100],sizeOfArray;
    do{
        printf("введите размер массива(от 1 до 100): \n");
        scanf("%i",&sizeOfArray);
    }while(sizeOfArray < 1 || sizeOfArray > 100);
    for(int i=0; i++<sizeOfArray;){
        array[i]=rand() % 1000;
        printf("%i ",array[i]);
    }
    printf("\n");
    int buffer;
    for(int j=0; j++<sizeOfArray;){
        for(int i=0; i++<sizeOfArray;){
            if((array[i] % 10) > (array[i+1] % 10)){
                buffer=array[i];
                array[i]=array[i+1];
                array[i+1]=buffer;
            }
        }
    }
    for(int i=0; i++<sizeOfArray;){
        printf("%i ",array[i]);
    }
}