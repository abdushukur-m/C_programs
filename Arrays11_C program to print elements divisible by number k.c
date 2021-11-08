// C program to print elements divisible by number k
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int reverse[10000], n, k;

    srand(time(0));
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter k (k<n): ");
    scanf("%d",&k);

    for (int i=0;i<=n;i++){
        reverse[i]=rand()%100;
        printf("\na[%d]= %d",i,reverse[i]);
    }
    printf("\n\n");

    for (int i=0;i<=n;(i+=k)){
        printf("\na[%d]= %d",i,reverse[i]);
    }
    printf("\n\n");


    return 0;
}
