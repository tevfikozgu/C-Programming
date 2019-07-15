#include <stdio.h>
#include <stdlib.h>

//sayiyi tersten okur!!

int main()
{
	int number;
	int new_number=0;
	int biggest=1;
	int digit=0;
	int digit_number=0;
	printf("Please enter a positive integer:");
	scanf("%d",&number);
	int numberr = number;
	for (int i=1;i <= number;i=i*10){
		if (number/i !=0){
			digit ++;
		}
	}
	for (int i=1 ; i<digit ; i++){
		biggest = biggest*10;
	}
	for (int i = 1 ; i <= numberr ; i= i*10){ 
		digit_number = number / biggest; 
		number = number % biggest;
		biggest = biggest / 10;
		new_number = new_number +( digit_number * i );
		}
	printf("%d\n",new_number);
	return EXIT_SUCCESS;
}
	
