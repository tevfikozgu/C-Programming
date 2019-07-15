#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#define SIZE 50

int distance_finder(int park[][SIZE],int size)
{
    int biggest_distance=0,distance=0;
    for (int i=0;i<size;i++){
		for (int j=0;j<size;j++){
			if (park[i][j] == 0 ){
				for (int i1=0;i1<size;i1++){
					for (int j1=0;j1<size;j1++){
						if (park[i1][j1] == 1 ){
							biggest_distance = (i1-i)*(i1-i) + (j1-j)*(j1-j);
							break;
						}
					}
				}
				for (int i1=0;i1<size;i1++){
					for (int j1=0;j1<size;j1++){
						if (park[i1][j1] == 1 ){
							distance = (i1-i)*(i1-i) + (j1-j)*(j1-j);
							if (distance<biggest_distance){
								biggest_distance=distance;
							}
						}
					}
				}
			}         
		}
	}
    return biggest_distance;
}

int main()
{
	int size;
	printf("Size:");
	scanf("%d",&size);
	int cars;
	printf("Cars:");
	scanf("%d",&cars);
	int park[SIZE][SIZE];
	for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
			park[i][j] = 0;
		}
    }
	for (int i=0;i<cars;i++){
		int x,y;
		printf("Coordinates:");
		scanf("%d",&x);
		scanf("%d",&y);
		park[x][y] = 1;
	}
	int distance = distance_finder(park,size);
	printf("%d",distance);
    return EXIT_SUCCESS;
}
