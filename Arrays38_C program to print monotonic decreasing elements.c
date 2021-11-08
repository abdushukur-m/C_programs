// C program to print monotonic decreasing elements
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int array[1000],localmins[10], n, k, counter=0;
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

    for (k = 1; k <=n; k++){
        if(array[k]<=array[k-1]){
            counter++;
            printf("\na[%d]>a[%d]",k-1,k);
        }
    }
    printf("\n\nNumber of monotonously decreasing intervals: %d\n\n",counter);

    return 0;
}
