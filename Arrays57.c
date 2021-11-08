#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int arr[100], brr[100], n=15, counter=0;
    srand(time(0));

    //int size=sizeof(brr)/sizeof(brr[0]);
    //printf("\nEnter size of the array: ");
    //scanf(" %d", &n);

    for (int i = 0; i <= n; i++){
        arr[i]=rand()%50;
        printf("a[%d]=%d\n", i, arr[i]);
    }
    printf("\n");

    for(int j=0, k=0; j<=n/2, k<=n; j++, k+=2){
        brr[j]=arr[k]; counter++;
        printf("b[%d]=%d\n", j, brr[j]);
    }
    for(int j=n/2+1, k=1; j<=n, k<=n; j++, k+=2){
        brr[j]=arr[k]; counter++;
        printf("b[%d]=%d\n", j, brr[j]);
    }    
    printf("\n\n");
    
    return 0;
}