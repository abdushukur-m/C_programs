// C program to count the number of elements larger than their neighbors on their right
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int arr[100], n=20;
    srand(time(0));

    //printf("\nEnter size of the array: ");
    //scanf(" %d", &n);

    for (int i = 0; i <= n; i++){
        arr[i]=rand()%100;
        printf("a[%d]=%d,  ",i, arr[i]);
        //scanf(" %d", &arr[i]);
    }
    printf("\n\n");

    for (int i = 0; i < n; i++){
        if(arr[i+1]<arr[i]){
            printf("\na[%d]=%d",i,arr[i]);
        }
    }

    return 0;
}
