#include <stdio.h>

int main(){
    // int a,b; 
    // a = 10 ; 
    // b = 20 ; 
    // int sum = a + b; 

    // //printf("First number is %d and 2nd is Number %d so the sum is: %d", a, b, sum); 
    // float x, y ;
    // x = 10.4; 
    // y = 24.6; 

    // float div = y / x ; 

    // printf("%.2f", div); 

    // Basic Calculator 
    float num1, num2; 
    printf("Enter your first Number: \n"); 
    scanf("%f", &num1); 
    printf("Enter your 2nd number: \n"); 
    scanf("%f", &num2); 

    printf("Your First number is: %f \n", num1); 
    printf("Your 2nd number is: %f \n", num2);

    float sum = num1 + num2; 
    float multi = num1 * num2; 
    float div = num1 / num2; 

    printf("Sum of two number is: %f \n", sum); 
    printf("Multi of two number is: %f \n", multi);
    printf("Div of two number is: %.2f \n", div);



}