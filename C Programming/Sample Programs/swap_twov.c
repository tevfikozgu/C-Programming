#include <stdio.h>
#include <stdlib.h>

int main(){
	double a,b;
	printf("Type A and B:");
	scanf("%lf",&a);
	scanf("%lf",&b);
	a=a+b;
	b=a-b;
	a=(a-b);
	printf("A: %.1lf\nB: %.1lf\n",a,b);
	return EXIT_SUCCESS;
}
 
