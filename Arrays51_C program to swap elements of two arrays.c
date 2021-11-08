// C program to swap elements of two arrays
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int arr[100], brr[100], temprr[100], n=10;
    srand(time(0));

    //printf("\nEnter size of the array: ");
    //scanf(" %d", &n);

    for (int i = 0; i <= n; i++){
        arr[i]=rand()%100;
        brr[i]=rand()%100;

        printf("a[%d]=%d  b[%d]=%d\n",i, arr[i], i, brr[i]);
    }
    printf("\n\n");

    for (int i = 0; i <= n; i++){
        temprr[i]=arr[i];
        arr[i]=brr[i];
        brr[i]=temprr[i];
        printf("a[%d]=%d  b[%d]=%d\n",i, arr[i], i, brr[i]);

    }
    printf("\n\n");


    return 0;
}
