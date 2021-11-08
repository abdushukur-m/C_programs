// C program to sort elements of an array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int a_arr[100], b_arr[100], c_arr[100], d_arr[100], size_a=5, size_b=7, n=size_a+size_b+1, min;
    int i, j, k, l;
    srand(time(0));

    //int size=sizeof(brr)/sizeof(brr[0]);
    //printf("\nEnter size of the array: ");
    //scanf(" %d", &n);

    for (int i = 0; i<=size_a; i++){
        a_arr[i]=rand()%101 - 50;
        printf("a[%d]=%d\n", i, a_arr[i]);
    }
    printf("\n");
    for (int j = 0; j <= size_b; j++){
        b_arr[j]=rand()%101 - 50;
        printf("b[%d]=%d\n", j, b_arr[j]);
    }

    printf("\n");

    for (int i = 0; i <= n; i++){
        if (i<=size_a){
            c_arr[i]=a_arr[i];
            printf("\nc[%d]=%d", i, c_arr[i]);
        }
        else {
            c_arr[i]=b_arr[i-size_a-1];
            printf("\nc[%d]=%d", i, c_arr[i]);
        }
    }

    for(int i=0; i<=n; i++){
        for (int j = 0; j<=n; j++){
            if(c_arr[i]<=c_arr[j]){
                min=c_arr[i];
                c_arr[i]=c_arr[j];
                c_arr[j]=min;
            }
        }
    }

    printf("\n");
    for (int i = 0; i <= n; i++) printf("\nd[%d]=%d", i, c_arr[i]);


    return 0;
}
