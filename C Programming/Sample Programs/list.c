#include <stdio.h>
#include <stdlib.h>
#define COLUMN 3
#define ROW 5

int total_madalya(int list[][COLUMN],int row){
    int madalya = 0;
    for ( int i=0;i<COLUMN;i++){
        for (int j=0;j<row;j++){
            int madalya_amount = list[j][i];
            madalya += madalya_amount; 
        }
    }
    return madalya;
}

int main()
{
    int medals[ROW][COLUMN] ={{1,0,1},{1,0,2},{3,0,2},{3,2,1},{1,0,1}};
    int madalya = total_madalya(medals,5);
    printf("%d",madalya);
    return EXIT_SUCCESS;
}
