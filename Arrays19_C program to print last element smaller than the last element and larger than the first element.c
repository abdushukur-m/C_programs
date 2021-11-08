// C program to print last element smaller than the last element and larger than the first element
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){
    int array[10000], n, i,counter=0;

    srand(time(0));
    printf("Enter n: ");
    scanf("%d",&n);

    for (i=0;i<=n;i++){
        array[i]=rand()%100;
        printf("\na[%d]= %d",i,array[i]);
    }
    printf("\n\na[%d]=%d\n\n",i-1,array[i-1]);

    for(int j=n; j>=0; j--){
        if ((array[j]<array[i-1])&&(array[0]<array[j])){
            printf("a[%d]=%d < a[%d]=%d < a[%d]=%d\n\n",0,array[0],j,array[j],i-1,array[i-1]);
            printf("%d\n\n",j);
            counter++;
            break;
        }
    }
    if (counter==0){
        printf("0\n\n");
    }

    return 0;
}
