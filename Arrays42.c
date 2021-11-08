#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int arr[1000], n, R, in1, in2, sum, diff, closSum;
    srand(time(0));

    printf("Enter the size of the array a[]: ");
    scanf(" %d", &n); 

    printf("Enter R: ");
    scanf(" %d", &R); 

    for (int  i = 0; i <= n; i++){
        arr[i]=rand()%100;
        printf("\na[%d]= %d",i,arr[i]);
    } 
    sum=arr[0]+arr[1];
    (sum-R>=0)?(diff=sum-R):(diff=R-sum);
    
    //printf("\nDifference: %d",diff);

    for (int j = 0; j < n; j++){
        sum=arr[j]+arr[j+1];
        if((sum-R>0) && (sum-R < diff)){
            closSum=arr[j]+arr[j+1];
            in1=j;
            in2=j+1;
            printf("\nDifference (If): %d",sum-R);
        }else if((sum-R<0) && (R-sum < diff)){
            closSum=arr[j]+arr[j+1];
            in1=j;
            in2=j+1;
            printf("\nDifference (If Else 1): %d",R-sum);
        }else if((sum-R==diff) || (R-sum==diff)||(sum==R)){
            closSum=arr[j]+arr[j+1];
            in1=j;
            in2=j+1;
            printf("\nDifference (If Else 2): %d",R-sum);
        }
    }

    //printf("\n\nThe sum: a[%d]+a[%d]=%d\n\n", in1, in2, sum);
    printf("\n\nThe closest sum to %d: a[%d]+a[%d]=%d\n\n", R, in1, in2, closSum);
    return 0;
}