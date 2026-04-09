#include <stdio.h>

int main(){
    int x = 10;
    float y = 3.14; 
    printf("%.2f\n", y);

    // input from user 
    int age; 
    printf("Enter your age: ");
    scanf("%d", &age); 
    printf("Your age is: %d", age);
    return 0;
}