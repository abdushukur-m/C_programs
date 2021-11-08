// C program to print elements of an array in even position
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int reverse[10000], n;

    srand(time(0));
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        reverse[i]=rand()%100;
        printf("\na[%d]= %d",i,reverse[i]);
    }
    printf("\n\n");

    for (int i=0;i<=n;(i+=2)){
        printf("\na[%d]= %d",i,reverse[i]);
    }
    printf("\n\n");


    return 0;
}
