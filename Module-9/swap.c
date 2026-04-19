#include <stdio.h>
int main(){
    int a , b ; 
    a = 10; 
    b = 20; 
    // now want to swap like a = 20, b= 10 
    int temp; 
    temp = a ; 
    a = b; 
    b = temp ; 

    printf("A = %d\nB = %d", a, b); 
}