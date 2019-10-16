#include <stdio.h>

int main(){
    int mas[25],k,n;
    do{
        printf("введите числа k и n(от 1 до 5)\n");
        scanf("%i%i",&k,&n);
    }
    while((k < 1 || k > 5) && (n < 1 || n > 5));
    for(int i=0; i<k*n; i++){
        printf("введите число %i\n",i+1);
        scanf("%i",&mas[i]);
    }
    for(int i=0; i<k*n; i++){
        if(i == k*n-1){
            printf("a%i(%i-1)+1 + k + a%i = %i + %i + %i = %i\n",k,n,k,mas[(k*(n-1)+1)],k,mas[k-1],(mas[(k*(n-1)+1)]+k+mas[k-1]));
        }
        else if(i != k*n-1){
            printf("a%i + k + a%i = %i + %i + %i = %i\n",i+1,k,mas[i],k,mas[k-1],(mas[i]+k+mas[k-1]));
        }
    }
}