// C program to print each element only once excluding similar elements
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int arr[1000], n;
    srand(time(0));

    printf("Enter size of the array a[]: ");
    scanf(" %d", &n);

    for (int  i = 0; i <= n; i++){
        arr[i]=rand()%100;
        printf("\na[%d]= %d",i,arr[i]);
    }

    printf("\n");

    for(int i=0;i<=n;i++){
        for (int  j=i+1; j<n; j++){
            if (arr[i]==arr[j]){
                printf("\na[%d]=a[%d]",i,j);
                for (int k=j; k<=n-1; k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\n");
    for (int  i = 0; i <= n; i++){
        printf("\na[%d]= %d",i,arr[i]);
    }
    printf("\n\n");

    return 0;
}
