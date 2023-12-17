#include<stdio.h>

int main(void){

    int num=0;

    printf("Enter Element of the Array:\n");

    scanf("%d", &num);

    int array[num];

    for(int i=0; i<num; i++){ //loop for the array element
        scanf("%d", &array[i]);
    }
    int max=array[0];//the index 0 content is assigned to max 

    for(int i=0; i<num; i++){//loop for the array content

        if(array[i]> max){//if the array i content is greater than max then array i content is asigned to max
            max=array[i];
        }
    }
    printf("Maximum is %d", max);//print maximum array content
}