#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char* name;
	char* surname;
	int age;
}ogrenci;

int main(){
	if(fopen("deneme.txt","r")){
		int secim;
		printf("Ogrenci Eklemek icin 1'i\nAramak icin 2'yi tuslayiniz: ");
		scanf("%d",&secim);
		if (secim==1){
			ogrenci.name=(char*)malloc(100*sizeof(char));
			ogrenci.surname=(char*)malloc(100*sizeof(char));
			printf("Name: ");
			scanf("%s",ogrenci.name);
			printf("Surname: ");
			scanf("%s",ogrenci.surname);
			printf("Age: ");
			scanf("%d",&ogrenci.age);
			FILE* text=fopen("deneme.txt","a");
			fprintf(text,"%s %s %d\n",ogrenci.name,ogrenci.surname,ogrenci.age);
			fclose(text);		
			}
		free(ogrenci.name);
		free(ogrenci.surname);
		if (secim==2){
			char* isim =(char*)malloc(100*sizeof(char));
			printf("Isim Giriniz: ");
			scanf("%s",isim);
			FILE* text=fopen("deneme.txt","r");
			ogrenci.name=(char*)malloc(100*sizeof(char));
			ogrenci.surname=(char*)malloc(100*sizeof(char));
			while(1){
				if(!feof(text)){
					fscanf(text,"%s %s %d",ogrenci.name,ogrenci.surname,&ogrenci.age);
					if(strcmp(ogrenci.name,isim)==0){
						printf("%s %s %d\n",ogrenci.name,ogrenci.surname,ogrenci.age);
					}
				}
		else{
			break;
		}
			fclose(text);
			free(isim);
			free(ogrenci.name);
			free(ogrenci.surname);
		}
	else{
		printf("File didn't Opened\n");
	}
	return EXIT_SUCCESS;
}
