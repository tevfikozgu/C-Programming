#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	int c = 0;
	printf("Type A and B:");
	scanf("%d",&a);
	scanf("%d",&b);
	c=b;
	b=a;
	a=c;
	printf("A: %d\nB: %d\n",a,b);
	return EXIT_SUCCESS;
}
