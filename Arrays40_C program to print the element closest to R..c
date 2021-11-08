// C program to print the element closest to R.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int arr[1000], n, R, k, diff, closest, index;
    srand(time(0));

    printf("Enter size of the array a[]: ");
    scanf(" %d", &n);

    printf("Enter R: ");
    scanf(" %d", &R);

    for (int  i = 0; i <= n; i++){
        arr[i]=rand()%100;
    }

    for (int j = 0; j <= n; j++){
        printf("\na[%d]= %d",j,arr[j]);
    }

    ((arr[0]-R)>0)?(diff=arr[0]-R):(diff=R-arr[0]);
    printf("\n\n");

    for (k = 0; k <= n; k++){
        if (((arr[k]-R)>=0 && (arr[k]-R)<=diff)||((arr[k]-R)<=0 && (R-arr[k])<=diff)){

            ((arr[k]-R)>0)?(diff=arr[k]-R):(diff=R-arr[k]);
            closest=arr[k];
            index=k;
        }
    }

    printf("\n\nThe closest element of the array to %d: a[%d]=%d\n\n",R,index,closest);

    return 0;
}
