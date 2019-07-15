#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	srand (time(NULL));
	int team1=0;
	int team2=0;
	int outcome=rand()%2 + 1;
	int serve=rand()%2 + 1;
	int serve1=rand()%2 + 1;
	while(team1<15 && team2<15){
		printf("Team%d is serving\n",serve);
		if (serve == 1 && outcome ==1){
				team1+=1;
			}
		else if (serve == 2 && outcome == 2){
			team2+=1;
		}
		else{
			while (serve1==serve){
				serve1=rand()%2 + 1;
			}
		serve=serve1;
		}
		outcome=rand()%2 + 1;
		printf("%2d - %2d\n",team1,team2);
	}
	while (abs(team1-team2)==1){
		printf("Team%d is serving\n",serve);
		if (serve == 1 && outcome ==1){
			team1+=1;
		}
		else if (serve == 2 && outcome == 2){
			team2+=1;
		}
		else{
			while (serve1==serve){
				serve1=rand()%2 + 1;
			}
		serve=serve1;
		}
		outcome=rand()%2 + 1;
		printf("%2d - %2d\n",team1,team2);
	}
	return EXIT_SUCCESS;
}
