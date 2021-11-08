// C program to check if elements are sorted or not
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int arr[100], n;
    bool sorted=false;
    //srand(time(0));

    printf("\nEnter size of the array: ");
    scanf(" %d", &n);

    for (int i = 0; i <= n; i++){
        //arr[i]=rand()%100;
        printf("a[%d]=",i);
        scanf(" %d", &arr[i]);
        if(arr[i+1]-arr[i]==1){
            printf("\n0\n");
            break;
        }
    }
    for (int i = 1; i < n-1; i++){
        if(arr[i+1]-arr[i]==1 && arr[i]-arr[i-1]==1){
            printf("\na[%d]=%d",i,arr[i]);
            sorted=true;
            break;
        }
    }
    if(!sorted)
        printf("\n0\n");

    return 0;
}
