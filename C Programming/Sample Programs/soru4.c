#include <stdio.h>
#include <stdlib.h>

int main(){
	int total=0;
	char dizi[16];
	printf("Number:");
	scanf("%s",dizi);
	/* SORU1
	for (int i = 15;i>=0;i--){
		int deger = dizi[i]-'0';
		if(i%2 == 0){
			deger = deger * 2;
			if (deger>9){
				deger = deger-9;
			}
		}
		total += deger;
	}
	if (total % 10 == 0){
		printf("Dogru\n");
	}
	else{
		 printf("Yanlis\n");
	 }*/
	 
	 for (int i = 15;i>=0;i--){
		 if (dizi[i] != '?'){
			 int deger = dizi[i]-'0';
			 if(i%2 == 0){
				deger = deger * 2;
				if (deger>9){
					deger = deger-9;
				}
			}
			total += deger;
		}
	}
	for (int i = 15;i>=0;i--){
        if (dizi[i] == '?'){
			
          for (int i1 = 0;i1<10;i1++){
            if ((total+i1)%10 == 0){
              dizi[i] = i1 +'0';
            }
          }
        }
    }
	printf("%s",dizi);
    return EXIT_SUCCESS;
}
