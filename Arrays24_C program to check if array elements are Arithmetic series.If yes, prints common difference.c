// C program to check if array elements are Arithmetic series
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int array[10000], n, i,sum1=0;
    double sum2=0;

    srand(time(0));
    printf("Enter size of the array n: ");
    scanf("%d",&n);

    for (i=0;i<=n;i++){
        printf("a[%d]= ",i);
        scanf(" %d",&array[i]);
        sum1+=array[i];
    }
    //printf("\n%d\n",sum1);

    sum2=(array[0]+array[i-1])/2*(i);
    //printf("%.2lf\n", sum2);

    if(sum2==sum1){
        printf("\nCommon Difference:  %d\n",array[1]-array[0]);
        printf("The array consists of Arithmetic elements\n\n");
    }else{
        printf("\n0\n");
    }

    return 0;
}
