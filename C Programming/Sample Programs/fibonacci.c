#include <stdio.h>

int main()
{
    int input,next_term;
    int free=0;
    int first=1;
    int second=1;
    printf("How Many Numbers:");
    scanf("%d",&input);
    for (int i=0;i<input;i++){
        if (input==1){
            printf("%d\n",first);
            break;
            }
        else{                
            printf("%d ",first);
            next_term = first + free;
            free = first;
            first = next_term;
        }
    }
    printf("\n");
    return 0;
}
