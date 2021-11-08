// C program to print even elements of of an array which consists of randomly chosen elements
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int reverse[10000], n, counter=0;

    srand(time(0));
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        reverse[i]=rand()%1000;
        printf("\na[%d]= %d",i,reverse[i]);
    }
    for (int j = n; j >= 0; j--){
        if(reverse[j]%2==0){
            printf("\n%d",reverse[j]);
            counter++;
    }
    }
    printf("\nNumber of Odd numbers: %d\n",counter);


    return 0;
}
