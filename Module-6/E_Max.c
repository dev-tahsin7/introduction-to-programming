#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n); 

    int x; 
    int max = 0; 
    for(int i = 1; i <= n; i++){
        scanf("%d", &x);
        if(x>max){
            max = x; 
        }
    }
    printf("%d", max); 
    return 0; 
}