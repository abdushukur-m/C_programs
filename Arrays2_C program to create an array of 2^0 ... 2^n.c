//C program to create and print an array of 2^0 ... 2^n
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    long int numbers[1000], n;

    printf("\nEnter n: ");
    scanf("%d", &n);

    for(int i=0; i<=n;i++){
        numbers[i]=pow(2,i);
        printf("2^%li = %d\n",i,numbers[i]);
    }

    return 0;
}
