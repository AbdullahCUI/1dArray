#include<stdio.h>

int main(void){

    int array[10];//declared array and size is 10

    //declaring two variable for counting even and odd
    int even=0, odd=0
    printf("Enter array content:\n");

    for(int i=0; i<10; i++){//for loop for the array content 
        scanf("%d", &array[i]);//scanf read the value from user and store in array array
    } //codition loop for even and odd
    if (array[i] % 2==0){ //if the contnt in array is completly divided by 2 that number is count is a even else odd

        even++;
    }else {
        odd++;
    }
    printf(" Even content is Array is %d", even);
    printf("Odd content in Array is %d", odd);
}