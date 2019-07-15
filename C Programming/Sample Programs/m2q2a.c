#include <stdio.h>
#include <stdlib.h>

void rotate_right(char* dst,char* src,int n)
{
    int i;
    for (int i1=0;i1<n;i1++){
        for (i=0;src[i] != '\0' ; i++){
            dst[i+1]=src[i];
        }
    dst[0] = src[i-1];
    dst[i]='\0';
    for (int i2=0;dst[i2] != '\0' ; i2++){
            src[i2]=dst[i2];
        }
    }
}


int main(){
    char src[] = "tevfik";
    char dst[7];
    int n;
    printf("How many oteleme:");
    scanf("%d",&n);
    rotate_right(dst,src,n);
    printf("%s\n",dst);
    return EXIT_SUCCESS;
}
