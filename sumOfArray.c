#include<stdio.h>

int main(){

    int array[5];//first array

    int array1[5];//second array

   sumOfArray[5];//resutl'n array

   for(int i=0; i<5; i++){ //first number index and storing content in first array
    printf("Enter the first array content:");
    scanf("%d",&array[i]);
   }
   for(int i=0; i<5; i++){ //contnt store in second array
    printf("Enter the second array content:");
    scanf("%d",&array1[i]);
   }
   for(int i=0; i<5; i++){//content store in result array
    sumOfArray[i]=array[i]*array1[i];//i change the oparator addittion to multiplication now the array is multipling and store the result

    printf("The multiplication of the index %d =%d\n", i,sumOfArray[i]);//print the result
   }









}