#include<stdio.h>

int main(){

    int array_2d[2][3]={{1,2,3},{3,5,6}};//its 2d array it mean in this array 2 rows and three col

    for(int i=0; i<2;i++){ //first loop for rows
        for(int j=0; j<3; j++){//second loop for col
            printf("%d\n", array_2d[i][j]);//printf the content in the array
        }
    }
}