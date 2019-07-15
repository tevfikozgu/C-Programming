#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Tringle possibility checker
*/

int main()
{
	double side1,side2,side3;	
	while(1){
		printf("Side 1:");
		scanf("%lf",&side1);
		printf("Side 2:");
		scanf("%lf",&side2);
		printf("Side 3:");
		scanf("%lf",&side3);
		if (side1<=0 || side2<=0 || side3<=0){
			printf("Please Type nonzero values");
		}
		else{
			if((fabs(side2-side3)<side1 && side1<side2+side3) || (fabs(side1-side2)<side3 && side3<side1+side2) || (fabs(side1-side3)<side2 && side2<side1+side3)){
				printf("This is possible for triangle\n");
			}
			else{
				printf("This triangle is impossible\n");
				}
		break;
		}
	}
	return 0;
}
