#include <stdio.h>
#include <math.h>

/*
	factorial calculator
 */
 
 
int main()
{
	int integer;
	int sayi=1;
	int i=1;
	do{
		printf("Enter a nonnegative integer:");
		scanf("%d",&integer);
	} while(integer <= 0);
	
	while (i <= integer){
		sayi = i*sayi;
		i++;
		}
	
	printf("%2d\n",sayi);
	return 0;
	
}
