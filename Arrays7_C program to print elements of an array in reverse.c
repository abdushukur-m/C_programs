// C program to create and print elements of an array in reverse
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int reverse[10000], n;
    printf("Enter n: ");
    scanf("%d",&n);

    int j=n;
    for (int i=0;i<=n;i++){
        printf("\na[%d]= %d",i,reverse[i]=j);
        j--;
    }

    return 0;
}
