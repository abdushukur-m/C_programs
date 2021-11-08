// C program to print two the closest elements
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int arr[1000], n=15, in1, in2, min, diff;
    srand(time(0));

    //printf("Enter size of the array a[]: ");
    //scanf(" %d", &n);

    for (int  i = 0; i <= n; i++){
        arr[i]=rand()%100;
        printf("\na[%d]= %d",i,arr[i]);
    }
    printf("\n\n");

    (arr[1]-arr[0]>=0)?(min=arr[1]-arr[0]):(min=arr[0]-arr[1]);

    for (int  i = 0; i < n; i++){
    (arr[i+1]-arr[i]>=0)?(diff=arr[i+1]-arr[i]):(diff=arr[i]-arr[i+1]);
        if(diff<=min){
            min=diff;
            in1=i;
            in2=i+1;
        }
    }
    printf("\n\n a[%d]=%d and a[%d]=%d are the closest to each other\n\n", in1, arr[in1], in2, arr[in2]);



    return 0;
}
