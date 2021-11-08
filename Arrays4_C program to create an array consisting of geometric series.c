// C program to create and print an array consisting of geometric series
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int geometricProgression[10000], A, n, difference;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter A: ");
    scanf("%d",&A);

    printf("Enter D: ");
    scanf("%d",&difference);

    for (int i=1;i<=n;i++){
        printf("\nNo%d: %d",i,geometricProgression[i]=A);
        A*=difference;
    }

    return 0;
}
