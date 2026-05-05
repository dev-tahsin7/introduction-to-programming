#include <stdio.h>
#include <math.h>

int main(){
    // ceil()
    float x = 4.5;
    int value = ceil(x);
    printf("%d\n",value);
    // floor()
    int value1 = floor(x);
    printf("%d\n",value1);
    // round() 
    int value2 = round(x);
    printf("%d\n",value2); 

    // sqrt()
    int y = sqrt(169); 
    printf("%d\n", y); 

    // pow()
    int power = pow(2, 3); 
    printf("%d\n", power); 

    return 0; 
}