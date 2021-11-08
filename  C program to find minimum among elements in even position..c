// C program to find minimum among elements in even position.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int array[1000], n, min, max;
    srand(time(0));

    printf("Enter size of the array a[]: ");
    scanf(" %d", &n);

    for (int  i = 0; i <= n; i++){
        array[i]=rand()%100;
    }

    for (int j = 0; j <= n; j++)
    {
        printf("\na[%d]= %d",j,array[j]);
    }
    min=array[0];
    max=array[0];
    for (int k = 0; k <= n; k++)
    {
        if(array[k]>max){
            max=array[k];
        }
        if (array[k]<min){
            min=array[k];
        }
    }

    printf("\nmaximum of a[%d] is %d\nminimum of a[%d] is %d\n",n,max,n,min);
    return 0;
}
