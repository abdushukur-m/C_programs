// C program to sort pos and neg elements into two arrays
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int arr[100], pos_arr[100], neg_arr[100], n=15, size_pos=0, size_neg=0;
    srand(time(0));

    //int size=sizeof(brr)/sizeof(brr[0]);
    //printf("\nEnter size of the array: ");
    //scanf(" %d", &n);

    for (int i = 0; i <= n; i++){
        arr[i]=rand()%200 - 99;
        if(arr[i]<=0){
            pos_arr[size_pos]=arr[i];
            size_pos++;
        }else{
            neg_arr[size_neg]=arr[i];
            size_neg++;
        }
        printf("a[%d]=%d\n", i, arr[i]);
    }
    printf("\n");

    printf("Size of array b: %d\n", size_pos);
    for(int j=0; j<size_pos; j++) printf("b[%d]=%d\n", j, pos_arr[j]);

    printf("\n\n");

    printf("Size of array c : %d\n", size_neg);
    for(int j=0; j<size_neg; j++) printf("b[%d]=%d\n", j, neg_arr[j]);
    printf("\n\n");

    return 0;
}
