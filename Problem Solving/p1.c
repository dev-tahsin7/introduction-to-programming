// Problem-01: Given a five digit integer, print the sum of its digits.

#include <stdio.h>
int main(){
    int num; 
    scanf("%d", &num); 

    int sum = 0 ; 
    int count ; 

    while (num > 0){
        count = num % 10 ; 
        sum += count ; 
        num /= 10 ; 
    }

    printf("%d", sum); 
    return 0; 

}
 

