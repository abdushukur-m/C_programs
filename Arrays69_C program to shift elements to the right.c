// C program to shift elements to the right
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int a_arr[100], size_a=10, min;
    int i, j, k, l;
    srand(time(0));

    //int size=sizeof(brr)/sizeof(brr[0]);
    //printf("\nEnter size of the array: ");
    //scanf(" %d", &n);

    for ( i = 0; i<=size_a; i++){
        a_arr[i]=rand()%101 - 50;
        printf("a[%d]=%d\n", i, a_arr[i]);
    }
    printf("\n");
    for ( i = 0; i<size_a; i++){
        a_arr[i]=a_arr[i+1];
        printf("a[%d]=%d\n", i, a_arr[i]);
    }
    printf("\n");


    return 0;
}
