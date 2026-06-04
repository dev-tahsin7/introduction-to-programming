// Checking Raw, Column & Square Matrix 
#include <stdio.h>

int main(){
    int raw, column; 
    scanf("%d %d", &raw, &column); 
    int two_array[raw][column]; 

    for (int i = 0 ; i < raw; i++){ 
        for(int j = 0; j < column; j++){
            scanf("%d", &two_array[i][j]); 
        }

    }
    
    if (raw == 1){
        printf("This is a Raw Matrix");
    }
    else{
        printf("This isn't a Raw Matrix");
    }

    // for column if (column == 1)
    // for square if (raw == column)

}