// C program to check the condition
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int arr[100], brr[100], n=10;
    srand(time(0));

    //printf("\nEnter size of the array: ");
    //scanf(" %d", &n);

    for (int i = 0; i <= n; i++){
        arr[i]=rand()%15;

        printf("a[%d]=%d\n",i, arr[i]);
    }
    printf("\n\n");

    for (int i = 0; i <= n; i++) {
        (arr[i]<5)?(brr[i]=2*arr[i]):(brr[i]=arr[i]/2);
        printf("b[%d]=%d\n",i,brr[i]);
    }
    printf("\n\n");


    return 0;
}
