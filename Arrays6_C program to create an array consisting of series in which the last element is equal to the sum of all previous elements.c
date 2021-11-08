// C program to create and print an array consisting of series in which the last element is equal to the sum of all previous elements
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int addition[10000], n, A, B, sum;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter a[0]: ");
    scanf("%d",&A);

    printf("Enter a[1]: ");
    scanf("%d",&B);

    sum=A+B;

    printf("\na[0]= %d \na[1]= %d",A, B);

    for (int i=2;i<=n;i++){

        printf("\na[%d]= %d",i,addition[i]=sum);
        sum+=A+B;
    }

    return 0;
}
