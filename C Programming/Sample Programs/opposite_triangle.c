#include <stdio.h>
#include <stdlib.h>

int main()
{
	int selected_row;
	printf("Row number:");
	scanf("%d",&selected_row);
	int step = selected_row ;
	for (int row=0;row<selected_row;row++){
		for (int current_step=2*step;current_step>step;current_step--){
			printf("*");			
		}
		step--;
		printf("\n");
	}
	return EXIT_SUCCESS;
}
