#define MAX_SIZE 100
#include "myheader.h"


void icerik(FILE* source,FILE* destination)
{
	char buffer[MAX_SIZE];
	while(1){
		fgets(buffer,sizeof(buffer),source);
		fputs(buffer,destination);
		if(feof(source)){
			break;
		}
	}
}
