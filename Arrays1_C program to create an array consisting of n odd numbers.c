//C program to create and print an array consisting n odd numbers 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int odds[10000], n, oddNum=1;
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        printf("\nNo%d: %d",i,odds[i]=oddNum);
        oddNum+=2;
    }
    
    return 0;
}