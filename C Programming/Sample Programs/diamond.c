#include <stdio.h>
#include <stdlib.h>

/* diamond creator */

int main()
{
	int row;
	do{
	printf("Please Enter odd Number:");
	scanf("%d",&row);
	} while (row<0 || row%2==0);
	for(int i=1;i<=row/2+1;i++){  /* for identify row */
		for (int space=row/2;space>=i;space--){
			printf(" ");
		}
		for (int i2=1;i2<=(2*i-1);i2++){
			printf("*");
		}		
		printf("\n");
	}
	for (int i=1;i<row/2+1;i++){
		for(int i1=0;i1<i;i1++){
			printf(" ");
		}
		for(int i2=row;i2>2*i;i2--){
			printf("*");
		}
		printf("\n");
	}
	
	return EXIT_SUCCESS;
}
