#include <stdio.h>

int main(){
    //increment - decrement 
    int x = 10 ; // x = 10
    int y = x++ ; // y = 10 and x = 11 // post increment 
    int z = ++y; // y = 11, z = 11 // pre increment 

    printf("%d\n", z++); // first z will be 11 then 12
    printf("%d", z); // now z = 12 

}