#include <stdio.h>

int main(){

    // 2d array declaration 
    int raw, column; 
    scanf("%d %d", &raw, &column); 
    int two_array[raw][column]; 

    // input of 2d array 
    for (int i = 0 ; i < raw; i++){ // for raw
        for(int j = 0; j < column; j++){ // for column
            scanf("%d", &two_array[i][j]); 
        }

    }

    // output of 2d array 
     for (int i = 0 ; i < raw; i++){ // for raw
        for(int j = 0; j < column; j++){ // for column
            printf("%d ", two_array[i][j]); 
        }
        printf("\n"); 

    }

    return 0; 

}