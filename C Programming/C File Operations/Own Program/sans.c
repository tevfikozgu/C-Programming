#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct insan{
	char name[50];
	char surname[50];
	int age;
}kisi;

int main (int argc, char *argv[])
{
	int secim;
	printf("Arama Yapmak icin 1 Ekleme yapmak icin 2 Rehberdeki kisileri gormek icin 3'e basiniz: ");
	scanf("%d",&secim);
	if (secim == 1){ //Kisi arama bolgesi
		char input[50];
		FILE* fp = fopen(argv[1],"r");
		if(fp ==NULL){
			printf("Error while file opening\n");
			exit(1);
		}
		printf("Isim: ");
		scanf("%s",input);
		while(!feof(fp)){   //NEDEN 2 KERE BASIYOR SONUNCUYU
			fscanf(fp,"%s %s %d",kisi.name,kisi.surname,&kisi.age);
			if (strcmp(kisi.name,input) == 0){
				printf("%s %s %d\n",kisi.name,kisi.surname,kisi.age);
			}
		}
		fclose(fp);
	}
	if (secim == 2){ //Kisi ekleme bolgesi
		FILE* fp = fopen(argv[1],"a");
		if(fp ==NULL){
			printf("Error while file opening\n");
			exit(1);
		}
		printf("Isim: ");
		scanf("%s",kisi.name);
		printf("Soyisim: ");
		scanf("%s",kisi.surname);
		printf("Age: ");
		scanf("%d",&kisi.age);
		fprintf(fp,"%s %s %d\n",kisi.name,kisi.surname,kisi.age);
		fclose(fp);
	}
	if (secim == 3){ //Dosyayi yazdirma bolgesi
		FILE* fp = fopen(argv[1],"r");
		while(1){
			char source[50];
			fgets(source,20,fp);
			if(feof(fp)){   ////NEDEN 2 KERE BASIYOR SONUNCUYU BU DA?
				break;
			}
			printf("%s",source);
		}
		printf("\n");
		fclose(fp);
	}
	return EXIT_SUCCESS;
}
