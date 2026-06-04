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

    // specific_raw  
    int specific_raw; 
    scanf("%d", &specific_raw); 
    for (int i = 0 ; i < column; i++){ 
        printf("%d ", two_array[specific_raw][i]); 
    }

    // specific_col  
    int specific_col; 
    scanf("%d", &specific_col); 
    for (int i = 0 ; i < raw; i++){ 
        printf("%d ", two_array[i][specific_col]); 
    }

    return 0; 

}