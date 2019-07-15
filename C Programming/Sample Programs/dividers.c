#include <stdio.h>
#include <stdlib.h>

int main(){
	int number;
	int count=0;
	printf("Enter a positive integer:");
	scanf("%d",&number);
	for (int i=1;i<=number;i++){
		if (number % i == 0){
			printf("%d ",i);
			count++;
		}
	}
	printf("\nThe number of integers whice divide %d evenly is %d.\n",number,count);
	return EXIT_SUCCESS;
}
