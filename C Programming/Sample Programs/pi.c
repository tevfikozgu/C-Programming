#include <stdio.h>
#include <stdlib.h>

int main()
{
	int term;
	double value1=0;
	double value2=0;
	double total_value=4;
	const int number=4;
	printf("How many Terms:");
	scanf("%d",&term);
    int set=2*term-1;
    int i1=1;
    int i2=3;
    printf("Term         VALUE\n");
    printf(" %d          %.3lf\n",1,4.000);
    for (int i=2;i<=term;i++){
        if(i1%number=1){
                value1=value1+number/i1;
                i1+=4;
            }
        if(i2%set=3){
                value2=value2+number/i2;
                i2+=4;
            }
        total_value=value1-value2;
        printf(" %d          %.3lf\n",i,total_value);
        }
    return EXIT_SUCCESS;
}
