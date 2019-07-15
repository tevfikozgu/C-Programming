#include <stdio.h>
#include <stdlib.h>

struct instruction_s {
    int step;
	int index;
};

int str_len(char* array){
	int i;
	for(i=0;array[i] != '\0';i++);
	return i;
}

void adjustment(char *base, char target[10][20])
{
	int n=0,i,j=0;
	for(i=0; 1 ;i++)
	{
		if (base[i] == '\r'){
			base[i] = '\0';
		}
		
		if(base[i] == ' ' && base[i+1] == ' '){
			for(int j=i+1;base[j] != '\0';j++){
				base[j] = base[j+1];
			}
		}
		
		if((base[i] != ' ') ){
			target[n][j]=base[i];
			j++;
	
		}
		else{
			target[n][j]='\0';
			n++;
			j=0;
		}
		if(base[i]=='\0')
		    break;
	}
}

void lowercase_maker(char* array){
	int length = str_len(array);
	for (int i=0;i<length;i++){
		if((array[i] >= 'A') && (array[i] <= 'Z')){
			array[i] = array[i] + 32;
		}
	}
}

void punctutaion_deleter(char* array){
	int length = str_len(array);
	for (int i=0;i<length;i++){
		if(!((array[i] >= 'a') && (array[i] <= 'z') && (array[i] != '\0'))){
			if(array[i] != '\0' && array[i] != ' '){
				array[i] = ' ';
				for (int j=i+1;array[j] != '\0';j++){			
					array[j] = array[j+1];
				}
			}
		}	
	}
}

int main(int argc,char* argv[])
{
	char* book_name=argv[1];
	char* instructions=argv[2];
	char* line_all;
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
		char arr[10][20];
		fgets(line_input, sizeof(line_input),yonlendirme);
		if(feof(yonlendirme)){
			break;
		}
		sscanf(line_input,"%d %d",&instruction.step,&instruction.index);
		total += instruction.step;
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
		lowercase_maker(line_all);
		punctutaion_deleter(line_all);
		//printf("%s\n",line_all);
		adjustment(line_all,arr);
		printf("%s ",arr[instruction.index-1]);
		fclose(book);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
