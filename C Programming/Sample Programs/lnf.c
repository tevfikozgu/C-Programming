#include <stdio.h>

int main()
{
	double x,series,step,total;
	double result1=0;
	double result2=0;
	double result=0;
	double a=1;
	printf("Type the x value:");
	scanf("%lf",&x);
	printf("How many sum:");
	scanf("%lf",&series);
	int i=1;	
	while (i <= series){
		if (i % 2 == 0){
			total = (x * a)/i;
			a = x * a;
			result1 = result1 + total;
			i++;}
		else{
			total = (x * a)/i;
			a = x * a;
			result2 = result2 + total;
			i++;}
	}
	result = result2-result1;
	printf("%lf\n",result);
	return 0;
}
