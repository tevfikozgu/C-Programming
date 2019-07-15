#include <stdio.h>
#include <stdlib.h>

struct instruction_s {
    int step;
	int index;
};

int main(int argc,char* argv[])
{
	char* book_name=argv[1];
	char* instructions=argv[2];
	char* line_all;
	//char* print;
	FILE* book;
	FILE* yonlendirme;
	if(!(yonlendirme = fopen(instructions,"r"))){
			printf("Error while opening the file!\n");
			exit(1);
	}
	int total=0;
	while(1){
		struct instruction_s instruction;
		char line_input[100];
		fgets(line_input, sizeof(line_input),yonlendirme);
		if(feof(yonlendirme)){
			break;
		}
		sscanf(line_input,"%d %d",&instruction.step,&instruction.index);
		total += instruction.step;
		//printf("%d ",total);
		if(!(book = fopen(book_name,"r"))){
			printf("Error while opening the file!\n");
			exit(1);
		}
		for(int i=0;i<total;i++){
			char current_line[200];
			fgets(current_line,200,book);
			if(i == total-1){
				line_all = current_line;
			}
		}
		printf("%s",line_all);
		fclose(book);
		}
	return EXIT_SUCCESS;
}
