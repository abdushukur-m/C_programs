// C program to find Sum and Arithmetic sum of elements between K and L K and L are excluded.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int array[10000], n, k, l;
    double sum=0;

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
        if (j<k||j>l)
        {
            printf("a[%d]=%d ",j,array[j]);
            sum+=array[j];
        }
    }
    printf("\nSum: %.0lf\nArithmetic mean: %.2lf", sum, sum/(l-k+1));

    return 0;
}
