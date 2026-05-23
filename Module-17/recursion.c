// Let's print 1 to 5 using recursion. 

#include <stdio.h>

void hello(int i){
    if (i == 6){
        return; 
    }
    printf("%d\n", i); 
    hello(i+1) ; // recursion.
}

int main()
{
    int i = 1; 
    hello(i); 
}