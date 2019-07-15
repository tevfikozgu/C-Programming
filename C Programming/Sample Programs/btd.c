#include <stdio.h>
#include <math.h>

/*
	binary to decimal operator
 */
 
 
int main()
{
	int binary_number,decimal_number,bolum,kalan,new_sayi;
	int divide_number=10000000;
	int i = 7;
	printf("Type the 8 bit binary number:");
	scanf("%d",&binary_number);
	while(i >= 0){
		bolum = binary_number / divide_number;
		new_sayi = new_sayi + bolum * pow(2,i);
		kalan = binary_number %  divide_number;
		binary_number = kalan;
		divide_number = divide_number / 10;
		i--;
	}	
	printf("%d\n",new_sayi);		
	return 0;	
}
