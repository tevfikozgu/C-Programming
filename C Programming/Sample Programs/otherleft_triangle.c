#include <stdio.h>
#include <stdlib.h>

int main()
{
	int selected_row;
	int step =1 ;
	printf("Row number:");
	scanf("%d",&selected_row);
	for (int row=0; row < selected_row; row++){
		for (int space=selected_row-1;space>row;space--){
			printf(" ");
		}
		for (int row1=0; row1 < step; row1++){
			printf("*");
		}
		step++;
		printf("\n");
	}
	return EXIT_SUCCESS;
}
