#include <stdio.h>
#include <stdlib.h>

void rotate_right(char* dst,char* src)
{
    int i;
    int i3;
    printf("Name:");
    scanf("%s",src);
    for (i3=0;src[i3] != '\0' ; i3++);
    i3++;
    dst = (char*) malloc(i3*sizeof(char));
    int n;
    printf("How many oteleme:");
    scanf("%d",&n);
    for (int i1=0;i1<n;i1++){
        for (i=0;src[i] != '\0' ; i++){
            dst[i+1]=src[i];
		}
		dst[0] = src[i-1];
		dst[i]='\0';
		for (int i2=0;dst[i2] != '\0' ; i2++){
            *(src+i2) = *(dst+i2);
        }
    }
}

int main(){
	
    char* src;
    char* dst;
    rotate_right(dst,src);
    printf("%s\n",dst);
    return EXIT_SUCCESS;
}
