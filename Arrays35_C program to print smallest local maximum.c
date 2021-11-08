// C program to print smallest local maximum
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int array[1000],localmins[10], n, min;
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

    min=array[0];
    for (int k = 0; k < n; k++){
        if(array[k]>=array[k-1]&&array[k]>=array[k+1]){
        printf("\na[%d]=%d ",k,array[k]);
            if (array[k]<=min){
            min=array[k];
            }
        }
    }
    printf("\n\nMin = %d\n\n",min);


    return 0;
}
