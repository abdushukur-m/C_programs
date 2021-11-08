// C program to assign even elements of one array to another array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int arr[100], brr[100], n=12, counter=0;
    srand(time(0));

    //int size=sizeof(brr)/sizeof(brr[0]);
    //printf("\nEnter size of the array: ");
    //scanf(" %d", &n);

    for (int i = 0; i <= n; i++){
        arr[i]=rand()%50;
        printf("a[%d]=%d\n", i, arr[i]);
    }
    printf("\n\n");

    for(int j=0; j<=n/2; j++){
        brr[j]=arr[2*j]; counter++;
        printf("b[%d]=%d\n", j, brr[j]);
    }
    printf("\n\n");
    printf("Size of array b: %d", counter);


    return 0;
}
