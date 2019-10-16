#include <stdio.h>

int main(){
    int mas[10],ifExist=0;
    for(int i=0; i<10; i++){
        printf("введите число %i\n",i+1);
        scanf("%i",&mas[i]);
    }
    for(int i=0; i<10; i++){
        if(mas[0] < mas[i] && mas[i] < mas[10-1]){
            ifExist=i;
        }
    }
    if(ifExist>=1){
        printf("номер элемента в массиве %i\n",ifExist);
    }
    else{
        printf("0\n");
    }
}