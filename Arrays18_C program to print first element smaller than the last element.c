// C program to print first A[k], A[0]<A[k]<A[n]
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int array[10000], n, i;
    bool counter=true;

    srand(time(0));
    printf("Enter n: ");
    scanf("%d",&n);

    for (i=0;i<=n;i++){
        array[i]=rand()%100;
        printf("\na[%d]= %d",i,array[i]);
    }
    printf("\n\na[%d]=%d\n\n",i-1,array[i-1]);

    for(int j=0; j<=n; j++){
        if (array[j]<array[i-1]){
            printf("a[%d]=%d < a[%d]=%d\n\n",j,array[j],i-1,array[i-1]);
            counter=false;
            break;
        }
    }
    if (counter)
    {
        printf("0\n\n");
    }

    return 0;
}
