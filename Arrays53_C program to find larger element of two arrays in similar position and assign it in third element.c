// C program to find larger element of two arrays in similar position and assign it in third element
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int arr[100], brr[100],crr[100], n=10;
    srand(time(0));

    //printf("\nEnter size of the array: ");
    //scanf(" %d", &n);

    for (int i = 0; i <= n; i++){
        arr[i]=rand()%50;
        brr[i]=rand()%50;
        (arr[i]>=brr[i])?(crr[i]=arr[i]):(crr[i]=brr[i]);
        printf("a[%d]=%d    b[%d]=%d    c[%d]=%d\n", i, arr[i], i, brr[i], i, crr[i]);
    }

    printf("\n\n");


    return 0;
}
