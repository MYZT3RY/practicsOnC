#include <stdio.h>
int main(){
	int valueOfDetails,noOfDetail;
	float weight,capacity,maxWeight,maxCapacity,density;
	printf("введите количество деталей\n");
	scanf("%i",&valueOfDetails);
	for(int i=0; i<valueOfDetails; i++){
		printf("деталь #%i: введите массу и объём\n",i+1);
		scanf("%f%f",&weight,&capacity);
		if(density < (weight/capacity)){
			density=weight/capacity;
			maxWeight=weight;
			maxCapacity=capacity;
			noOfDetail=i+1;
		}
	}
	printf("деталь #%i имеет самую высокую плотность\n",noOfDetail);
	printf("масса - %f; объём - %f; плотность - %f\n",maxWeight,maxCapacity,density);
}
