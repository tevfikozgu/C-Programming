#include <stdio.h>
#include <stdlib.h>

int main()
{	
	char two[] = {'A','B','C'};
	char three[] = {'D','E','F'};
	char four[] = {'G','H','I'};
	char five[] = {'J','K','L'};
	char six[] = {'M','N','O'};
	char seven[] = {'P','Q','R','S'};
	char eight[] = {'T','U','V'};
	char nine[] = {'W','X','Y','Z'};
	char number[50];
	char* pointer = number;
	int possibility=1;
	printf("Enter the Number: ");
	scanf("%[^\n]s",number);
	for (int i = 0;number[i] != '\0';i++){
		if(number[i] == '0' || number[i] == '1'){
			for (int j = 0;number[j] != '\0';j++){
				number[j] = '\0';
			}
			printf("Number should not include 0 and 1 \n");
			printf("Enter the Number: ");
			scanf("%[^\n]s",pointer);
			i=-1;
		}
	}
	for (int i = 0; number[i] != '\0'; i++){
		if(number[i] == '2'){
			possibility = possibility * 3;
		}
		if(number[i] == '3'){
			possibility = possibility * 3;
		}
		if(number[i] == '4'){
			possibility = possibility * 3;
		}
		if(number[i] == '5'){
			possibility = possibility * 3;
		}
		if(number[i] == '6'){
			possibility = possibility * 3;
		}
		if(number[i] == '7'){
			possibility = possibility * 4;
		}
		if(number[i] == '8'){
			possibility = possibility * 3;
		}
		if(number[i] == '9'){
			possibility = possibility * 4;
		}
	}
	printf("The number of Combinations: %d\n",possibility);
	return EXIT_SUCCESS;
}
