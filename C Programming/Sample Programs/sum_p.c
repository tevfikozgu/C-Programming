#include <stdio.h>
#include <stdlib.h>

//sum of list with pointers and malloc

int total_number(int* array,int size){
	int total=0;
	for (int i=0;i<size;i++){
		total += *(array + i);
	}
	return total;
}

void sum(int* array, int size){
	for (int i=0;i<size;i++){
		int number;
		printf("%d. Number:",i+1);
		scanf("%d",&number);
		array[i] = number;
	}
}


int main()
{
	int size;
	int* array;
	printf("Array Size:");
	scanf("%d",&size);
	array = (int*) malloc(size * sizeof(int));
	sum(array,size);
	/*
	for (int i=0;i<size;i++){
		printf("%d ",*(array + i));
	}
	*/
	int total = total_number(array,size);
	printf("%d\n",total);
	return EXIT_SUCCESS;
}
