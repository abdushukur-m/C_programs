// C program to print elements of an array in even and odd positions
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int array[10000], n, k;

    srand(time(0));
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        array[i]=rand()%100;
        printf("\na[%d]= %d",i,array[i]);
    }
    printf("\n\n");

    for (int i=0;i<=n;i+=2){
        printf("\na[%d]= %d",i,array[i]);
    }
    printf("\n\n");

    for (int i=1;i<=n;i+=2){
        printf("\na[%d]= %d",i,array[i]);
    }
    printf("\n\n");

    return 0;
}
