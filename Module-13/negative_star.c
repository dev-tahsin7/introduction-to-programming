#include <stdio.h>
/*
Print this pattern: 
*****
****
***
**
*

*/ 

int main(){
    int n; 
    scanf("%d", &n); 
    int star; 
    star = 5 ; 

    for(int i = 1; i <= n; i++){
        for(int j =1 ; j <= star; j++ ){
            printf("*"); 
        }
        printf("\n"); 
        star--; 
    }
}