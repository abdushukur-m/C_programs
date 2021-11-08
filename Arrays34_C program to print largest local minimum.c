// C program to print largest local minimum
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int array[1000],localmins[10], n, max;
    srand(time(0));

    printf("Enter size of the array a[]: ");
    scanf(" %d", &n);

    for (int  i = 0; i <= n; i++){
        array[i]=rand()%100;
    }

    for (int j = 0; j <= n; j++){
        printf("\na[%d]= %d",j,array[j]);
    }
    printf("\n\n");

    max=array[0];
    for (int k = 0; k < n; k++){
        if(array[k]<=array[k-1]&&array[k]<=array[k+1]){
        printf("\na[%d]=%d ",k,array[k]);
            if (array[k]>=max){
            max=array[k];
            }
        }
    }
    printf("\n\nMax = %d\n\n",max);


    return 0;
}
