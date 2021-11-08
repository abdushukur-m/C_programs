// C program to find sum of elements between K and L.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int array[10000], n, k, l, sum;

    srand(time(0));
    printf("Enter n (0<n): ");
    scanf("%d",&n);

    printf("Enter l (0<l<n): ");
    scanf("%d",&l);

    printf("Enter k (0<k<l<n): ");
    scanf("%d",&k);

    for (int i=0;i<=n;i++){
        array[i]=rand()%100;
        printf("a[%d]= %d\n",i,array[i]);
    }
    printf("\n\n");

    for (int j=0;j<=n; j++)
    {
        if (j>=k&&j<=l)
        {
            printf("a[%d]=%d ",j,array[j]);
            sum+=array[j];
        }
    }
    printf("Sum: %d\n\n", sum);

    return 0;
}
