// C program to find maximum among elements in odd position.
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
    printf("\n\n");
    min=array[0];
    max=array[0];
    for (int k = 0; k <= n; k+=2)
    {
        printf("\na[%d] = %d",k,array[k]);
        if (array[k]<min)
            min=array[k];
    }
    printf("\n\n");
    for (int k = 1; k <= n; k+=2)
    {
        printf("\na[%d] = %d",k,array[k]);
        if (array[k]>max)
            max=array[k];
    }

    printf("\n\nminimum of a[%d] is %d\n\nmaximum of a[%d] is %d\n",n,min,n,max);
    return 0;
}
