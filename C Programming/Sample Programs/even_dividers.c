#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	int b=0;
	do{
		printf("Enter a positive number:");
		scanf("%d",&a);
		}while(a<=1);
	for (int i=2;i<=a;i+=2){
		printf("%d ",i);
		b++;
	}
	printf("\nThe number of even integer is: %d.\n",b);
	return EXIT_SUCCESS;
}
