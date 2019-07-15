#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	double x=0;
	double s;
	do{
		s=1.0/(1+n*n);
		n++;
		x=x+s;
	}while(s>0.01);
	printf("%lf",x);	
	return EXIT_SUCCESS;
}
