// C program to check pos and neg elements come in order. If not, prints the first element disturbing sequence
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int array[1000], n, j=1; //n - number of elements of array[1000]
    bool posneg=true;

    printf("Enter number of elements of the array a[]: ");
    scanf(" %d", &n);

    for (int  i = 0; i <= n; i++){
        printf("a[%d] = ",i);
        scanf(" %d",&array[i]);
    }

    for (j;j<=n;j++){
        if((array[j-1]>0&&array[j]>0)||(array[j-1]<0&&array[j]<0)){
            posneg=false;
            printf("\na[%d]= %d\n",j,array[j]);
            break;
        }
    }

    if (posneg)
        printf("\n0\n");

    return 0;
}
