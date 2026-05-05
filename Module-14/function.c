#include <stdio.h>

// Function Creation 
/* 
return_type function_name(parameter)
{
-----------------------
***** code block ******
-----------------------
}
*/

// Function:- return + parameter 
int sum(int a, int b){
    int ans = a+b; 
    return ans; 
}

// Function:- return + no parameter
int sub(){
    int x , y; 
    scanf("%d %d", &x, &y); 
    int answer = x - y;  
    return answer; 
}

// Function:- no return + parameter 
void multi(int num1, int num2){
    int multiply = num1 * num2 ; 
    printf("%d", multiply); 

}

// Function:- no return + no parameter 
void div(){
    int value1 = 10; 
    int value2 = 2; 
    int division = value1 / value2 ; 
    printf("%d", division); 
}


int main(){
    // calling the function 
    int result = sum(4, 5); 
    printf("%d\n", result); 

    int value = sub(); 
    printf("%d\n", value);

    multi(3, 5); 
    div(); 


    return 0; 
}