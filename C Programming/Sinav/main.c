#include "myheader.h"

int main(int argc,char* argv[])
{
	char* source = argv[1];
	char* destination = argv[2];
	FILE* source_file;
	FILE* destination_file;
	source_file = fopen(source,"r");
	while(source_file == NULL){
		printf("Error opening File\n");
	}
	destination_file = fopen(destination,"w");
	while(destination_file == NULL){
		printf("Error opening File\n");
	}
	icerik(source_file,destination_file);
	return EXIT_SUCCESS;
}
