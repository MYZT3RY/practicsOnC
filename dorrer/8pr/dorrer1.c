#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#undef RAND_MAX
/*#define RAND_MAX 65534*/
#define RAND_MAX 4000000000

int main(){
    struct timeval stop, start, startSort, stopSort;
    unsigned int array[10]={0,0,0,0,0,0,0,0,0,0}, randomNumber, iters, tmp, i=0, secondMin, secondMinIter;
    do{
        printf("введите количество итераций(1 - ...): \n");
        scanf("%i",&iters);
    }while(iters < 1);
    gettimeofday(&start, NULL);
    for(; i<iters; i++){
        randomNumber=1+rand();
        while(randomNumber > 0){
            tmp=randomNumber%10;
            randomNumber/=10;
            array[tmp]++;
            /*printf("%i %i %i %i",i,tmp,randomNumber,array[tmp]);*/
        }   
    }
    gettimeofday(&stop, NULL);
    tmp=1000000000;
    i=0;
    gettimeofday(&startSort, NULL);
    for(; i<10; i++){
        if(tmp > array[i]){
            tmp=array[i];
            iters=i;
        }
        if(secondMin > array[i] && iters != i){
            secondMin=array[i];
            secondMinIter=i;
        }
    }
    gettimeofday(&stopSort, NULL);
    i=0;
    for(; i<10; i++){
        printf("%i %i\n",i,array[i]);
    }
    if(tmp == secondMinIter){
        printf("наименьшие цифра %i и %i встречаются в наборе %i количество раз. наименьшая цифра из них ",iters,secondMinIter,tmp);
        iters < secondMinIter ? printf("%i\n",iters) : printf("%i\n",secondMinIter);
    }
    else{
        printf("наименьшее цифра %i встречается в наборе %i раз\n",iters,tmp);
    }
    printf("время выполнения распределения %'.3fмс\n", (double) (stop.tv_sec - start.tv_sec) * 1000 + (double) (stop.tv_usec - start.tv_usec) / 1000);
    printf("время нахождения младшей цифры %'.3fмс\n",(double) (stopSort.tv_sec - startSort.tv_sec) * 1000 + (double) (stopSort.tv_usec - startSort.tv_usec) / 1000);
    printf("общее время выполнения %'.3fмс\n",(double) ((stop.tv_sec - start.tv_sec) * 1000 + (double) (stop.tv_usec - start.tv_usec) / 1000) + ((stopSort.tv_sec - startSort.tv_sec) * 1000 + (double) (stopSort.tv_usec - startSort.tv_usec) / 1000));
}