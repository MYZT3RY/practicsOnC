#include <stdio.h>

int main(){
	int x,y,z;
	scanf("%i%i%i",&x,&y,&z);
	((x+y+z)/2)>=(x+y*z)?printf("%i",((x+y+z)/2)+1):printf("%i",(x+y*z)+1);
}
