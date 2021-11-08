// C program to delete elements that occur more than twice
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int arrA[100], arrB[100], arrOrigin[100], size=15, counter;
    srand(time(0));

    for (int i = 0; i <= size; i++){
        arrOrigin[i]=arrA[i]=rand()%5;
        printf("a[%d]=%d\n", i, arrA[i]);
        arrB[i]=-10;
    }

    for(int i=0; i<size; i++){
        counter=1;
        for (int j = i+1; j <=size; j++){
            if (arrA[i]==arrA[j]){
                counter++;

                arrA[j]=0;
            }

            if (arrB[i]!=0){
                arrB[i]=counter;
            }
        }
    }
    for(int i=0; i<size; i++){
        if(arrA[i]!=0 ){
            printf("\na[%d] %d times", arrA[i], arrB[i]);
        }
    }
    printf("\n\n");
    for (int i = 0; i <= size; i++){
        printf("a[%d]=%d\n", i, arrOrigin[i]);
    }


    return 0;
}
