#include <stdio.h>
#include <stdlib.h>

int main() {
	int year,month,day,weekday,last,first,end_year,loop=0;
	printf("[Year Month Day:]");
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&day);
	int year3 = year;
	int year2=year+1;
	if ((month == 4 || month == 6 || month == 9 || month == 11  ) && (day>30)) {
		printf("Invalid Date\n");
	}
	else if ((month == 2 && (year % 4) != 0) && (day > 28)){
		printf("Invalid Date\n");
	}
	else if ((month == 2 && (year % 4) == 0) && (day > 29)){
		printf("Invalid Date\n");
	}
	else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8|| month == 10 || month == 12 ) && (day>31)) {
		printf("Invalid Date\n");
	}
	else{ 
		printf("End Year:");
		scanf("%d",&end_year);
		if (month == 1 || month == 2){
			month = month +12;
			year = year - 1;
		}
		last = year % 100;
		first = year / 100;
		weekday = (day + (13 * (month +1))/5 + last + last/4 + first/4 + 5*first) % 7;
		switch (weekday) {
			case 0:
				printf("It is Saturday\n");
				break;
			case 1:
				printf("It is Sunday\n");
				break;
			case 2:
				printf("It is Monday\n");
				break;
			case 3:
				printf("It is Tuesday\n");
				break;
			case 4:
				printf("It is Wednesday\n");
				break;
			case 5:
				printf("It is Thursday\n");
				break;
			case 6:
				printf("It is Friday\n");
				break;
			default:
				printf("ERROR\n");
		}
		while ( year2 <= end_year ){
			last = year2 % 100;
			first = year2 / 100;
			int weekday2 = (day + (13 * (month +1))/5 + last + last/4 + first/4 + 5*first) % 7;
			if (weekday2 == weekday) {
				loop ++;
			}
			year2++;
		}
		printf("Same day-and month on same weekday between %d and %d: %d\n",year3,end_year,loop);
	}
	return EXIT_SUCCESS;
}
