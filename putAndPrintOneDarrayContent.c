#include<stdio.h>

int main(void){
    int array[5];
   printf("Enter the array content:\n");//asking value from user
   for(int i=0; i<5; i++){
   	scanf("%d", &array[i]);//read and store the array content 
   }
   for(int i=0; i<5; i++){
   	printf("\nIn the index %d value is %d ",i, array[i]);//printf all array content
   }
}