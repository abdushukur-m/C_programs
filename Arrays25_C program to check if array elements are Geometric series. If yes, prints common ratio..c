// C program to check if array elements are Geometric series. If yes, prints common ratio.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int array[10000], n, i, sum1=0;
    double sum2=1,r=1;

    srand(time(0));
    printf("Enter size of the array n: ");
    scanf("%d",&n);

    for (i=0;i<=n;i++){
        printf("a[%d]= ",i);
        scanf(" %d",&array[i]);
        sum1+=array[i];
    }
    printf("\n%d\n",sum1);

    r=array[1]/array[0];
    sum2=array[0]*(pow(r,i)-1)/(r-1);
    printf("%.2lf\n", sum2);

    if(sum2==sum1){
        printf("\nCommon Ratio:  %d\n",r);
        printf("The array consists of Arithmetic elements\n\n");
    }else{
        printf("\n0\n");
    }

    return 0;
}
