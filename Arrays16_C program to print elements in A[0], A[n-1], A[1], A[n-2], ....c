// C program to print elements in odd position in increasing order and elements in even position decreasing order
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int array[10000], n, counter=0,i=1;

    srand(time(0));
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        array[i]=rand()%100;
        printf("\na[%d]= %d",i,array[i]);
    }
    printf("\n\n");
    printf("\na[0]= %d",array[0]);

    for (i;(i<n)&&(n-i!=i);i++){
        printf("\na[%d]= %d",n-i,array[n-i]);
        printf("\na[%d]= %d",i,array[i]);
    }
    printf("\na[%d]= %d",i,array[i]);
    printf("\n\n");

    return 0;
}
