#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 200
int main()
{
	char ccs[MAX_LENGTH]={};
	while(1){
		int choice;
		printf("\n0: Exit the program\n1: Set Current Character Sequence\n2: Get Substring\n3: Remove Substring\n4: Insert\n5: Replace\n");
		printf("\nEnter Your Choice: ");
		scanf("%d",&choice);
		if(choice == 0){
			printf("Goodbye!\n");
			return EXIT_SUCCESS;
		}
		if(choice == 1){
			printf("Enter CSS: ");
			fgets(*ccs,200,stdin);
		}
		if (choice == 2){
			if(ccs[0] == '\0'){
				printf("You have to set Current Character Sequence (CSS) before doing any operations!");
			}
			else{
				printf("Enter the BEGIN INDEX and END INDEX numbers: ");
				int begin,end,j=0;
				scanf("%d %d",&begin,&end);
				char destination[MAX_LENGTH]={};
				for (int i=begin; i<=end; i++){
					destination[j] = ccs[i];
					j++;
				}
				printf("CCS: %s\n",ccs);
				printf("Substring(%d,%d): %s\n",begin,end,destination);
			}
		}
		if (choice == 3){
			if(ccs[0] == '\0'){
				printf("You have to set Current Character Sequence (CSS) before doing any operations!");
			}
			printf("Enter the BEGIN INDEX and END INDEX numbers: ");
			int begin,end;
			scanf("%d %d",&begin,&end);
		}
		if (choice == 4){
			if(ccs[0] == '\0'){
				printf("You have to set Current Character Sequence (CSS) before doing any operations!");
			}
			
		}
		if (choice == 5){
			if(ccs[0] == '\0'){
				printf("You have to set Current Character Sequence (CSS) before doing any operations!");
			}
			
		}
	}
}

