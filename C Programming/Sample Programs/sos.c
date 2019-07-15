#include <stdio.h>

/*
 * size of a square
 */
 
 
int main()
{
	int size,column;
	int i_1=0;
	int i_2=0;
	printf("What is the size of square:");
	scanf("%d",&size);
	column=size;
	while (i_2 < size){
		while (i_1 < size){
			printf("* ");
			i_1++;
		}
		printf("\n");
		i_2++;
		i_1=0;
	}
}
