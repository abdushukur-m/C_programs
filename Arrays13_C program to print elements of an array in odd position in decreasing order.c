// C program to print elements of an array in odd position in decreasing order
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

    for (int i=0;i<=n;i++){
        reverse[i]=rand()%100;
        printf("\na[%d]= %d",i,reverse[i]);
    }
    printf("\n\n");

    for (int i=n-1;i>=1;(i-=2)){
        printf("\na[%d]= %d",i,reverse[i]);
    }
    if(n%2!=0){
        printf("\na[1]= %d",reverse[1]);
    }
    printf("\n\n");

    return 0;
}
