// C program to print two similar elements
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int arr[1000], n, in1, in2;
    srand(time(0));

    printf("Enter size of the array a[]: ");
    scanf(" %d", &n);

    for (int  i = 0; i <= n; i++){
        arr[i]=rand()%100;
        printf("\na[%d]= %d",i,arr[i]);
    }
    printf("\n\n");
    for (int  i = 0; i <= n; i++){
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                printf("\na[%d]=a[%d]",i,j);
            }
        }
    }



    return 0;
}
