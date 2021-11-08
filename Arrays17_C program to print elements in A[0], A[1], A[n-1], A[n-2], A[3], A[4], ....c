// C program to print elements in A[0], A[n-1], A[1], A[n-2], ...
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int array[10000], n, counter=0,i=0;

    srand(time(0));
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        array[i]=rand()%100;
        printf("\na[%d]= %d",i,array[i]);
    }
    printf("\n\n");

    for (i=0;i<n&&n-i!=i&&counter<n;i+=2){
        printf("\na[%d]= %d",i,array[i]);
        counter++;

        if (n-(i+1)==i){
            break;
        }

        printf("\na[%d]= %d",i+1,array[i+1]);
        counter++;
        printf("\na[%d]= %d",n-(i+1),array[n-(i+1)]);
        counter++;
        printf("\na[%d]= %d",n-(i+2),array[n-(i+2)]);
        counter++;


    }
    printf("\n\n");
    printf("%d",counter);

    return 0;
}
