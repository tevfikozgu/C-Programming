#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

typedef struct ogrenci
{
	double number;
	char name[MAX_SIZE];
	char surname[MAX_SIZE];
	int exam[3];
}STUDENT;

int main(int argc,char* argv[])
{
	
	char* count=argv[1];
	char* points=argv[2];
	FILE* count_file  =fopen(count,"r");
	char* new = NULL;
	while(1){
		STUDENT ogrenci1;
		FILE* points_file = fopen(points,"r");
		char line_count[MAX_SIZE];
		fgets(line_count,sizeof(line_count),count_file);
		if(feof(count_file)){
			break;
		}
		//printf("%s",line_count);
		
		double number;
		int count;
		sscanf(line_count,"%lf %d",&number,&count);
		int found=0;
		//char student_line[MAX_SIZE];
		//fgets(student_line,sizeof(student_line),points_file);
		//printf("%lf %d\n\n",number,count);
		
		while(1){
			if(found == count){
				break;
			}
			if(feof(points_file)){
				break;
			}
			//printf("%s",student_line);
			char student_line[MAX_SIZE];
			fgets(student_line,sizeof(student_line),points_file);
			double number2;
			sscanf(student_line,"%lf",&number2);
			//printf("%lf\n",number2);
			if (number2 == number){
				found++;
				new=student_line;
			}
			
			//printf("%s\n",student_line);
		}
		sscanf(new,"%lf %s %s %d %d %d",&ogrenci1.number,ogrenci1.name,ogrenci1.surname,&ogrenci1.exam[0],&ogrenci1.exam[1],&ogrenci1.exam[2]);
		double average = (ogrenci1.exam[0] + ogrenci1.exam[1] + ogrenci1.exam[2])/3;
		printf("%.2lf\n",average);
		fclose(points_file);
	}
	fclose(count_file);
	return EXIT_SUCCESS;
}
	
