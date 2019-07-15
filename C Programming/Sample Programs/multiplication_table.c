#include <stdio.h>
#include <stdlib.h>

int main(){
	for (int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			int result=i*j;
			printf("%d*%d=%d   ",i,j,result);
			}
		}
	return 	EXIT_SUCCESS;
}
