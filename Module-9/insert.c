#include <stdio.h>

int main(){
    // user input of array size
    int n; 
    scanf("%d", &n); 
    int arr[n+1]; // array dec. 
    
    // pushing elements to array
    for (int i = 0; i < n; i++){
        scanf("%d ", &arr[i]); 
    }

    // taking insert value and index 
    int index, value; 
    scanf("%d %d", &index, &value); 

    // moving element to right 
    for(int i = n ; i >= index+1; i--){
        arr[i] = arr[i-1]; 
    }
    // insert new element 
    arr[index] = value; 

    // printing to the new array after insert
    for(int i = 0; i<=n; i++){
        printf("%d ", arr[i]); 
    }



}