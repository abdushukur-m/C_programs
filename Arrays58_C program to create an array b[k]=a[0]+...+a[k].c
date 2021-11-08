// C program to create an array b[k]=a[0]+...+a[k]
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int arr[100], n=10,sum;
    srand(time(0));

    //int size=sizeof(brr)/sizeof(brr[0]);
    //printf("\nEnter size of the array: ");
    //scanf(" %d", &n);

    for (int i = 0; i <= n; i++){
        arr[i]=rand()%50;
        printf("a[%d]=%d\n", i, arr[i]);
    }
    printf("\n");

    for(int j=0; j<=n; j++){
        sum=0;
        for(int k=0; k<=j;k++) sum+=arr[k];
        printf("b[%d]=%d\n", j, sum);
    }
    printf("\n\n");

    return 0;
}
