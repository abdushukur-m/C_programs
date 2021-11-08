#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int arr[1000], n, l1, l2, sum;
    srand(time(0));

    printf("Enter size of the array a[]: ");
    scanf(" %d", &n); 

    for (int  i = 0; i <= n; i++){
        arr[i]=rand()%100;
    } 

    for (int j = 0; j <= n; j++){
        printf("\na[%d]= %d",j,arr[j]);
    }

    sum=arr[0]+arr[1];
    for (int k = 0; k <= n; k++){
        for (int m = 0; m < k; m++){
            if (arr[k]+arr[m]>=sum){
                sum=arr[k]+arr[m];
                l1=k;
                l2=m;
            }
        }
    }

    printf("\n\nThe greatest sum: a[%d]+a[%d]=%d\n\n", l1, l2, arr[l1]+arr[l2]);
    return 0;
}