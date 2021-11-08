#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int arr[1000], n, in1=0, in2=0, max;
    srand(time(0));

    printf("Enter size of the array a[]: ");
    scanf(" %d", &n);  

    for (int  i = 0; i <= n; i++){
        arr[i]=rand()%100;
    } 

    max=arr[0]+arr[1];

    for (int j = 0; j < n; j++){
        printf("\na[%d]= %d",j,arr[j]);
        if(arr[j]+arr[j+1]>=max){
            max=arr[j]+arr[j+1];
            in1=j;
            in2=j+1;
        }
    }


    printf("\n\nMax: a[%d]+a[%d]=%d",in1,in2,max);
    return 0;
}