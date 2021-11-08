// C program to create and print an array consisting of Fibonacci series
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int fibonacciNumbers[10000], n, F0=1, F1=1, Fn;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("\nNo0: 1\nNo1: 1");
    for (int i=2;i<=n;i++){
        Fn=F0+F1;
        printf("\nNo%d: %d",i,fibonacciNumbers[i]=Fn);
        F0=F1;
        F1=Fn;
    }

    return 0;
}
