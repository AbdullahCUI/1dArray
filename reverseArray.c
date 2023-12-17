#include<stdio.h>

int main(void){

    int n=0; //declaring variable;

    printf("Enter the number of element in Array:");

    scanf("%d", &n);

    //intilization of array
    int array[n];

    for(int i=0; i<n; i++){ //this for loop for to read the element from user and store in array

        scanf("%d",&array[i]);
    }
    for(int i=0; i<n; i++){
        printf("\nOrignal Array content%d ", array[i]);//print orignal array
    }
    for(int i=n-1; i<0; i--){
        printf("\nReverse Array content%d", array[i]);//print reverse array
    }
}