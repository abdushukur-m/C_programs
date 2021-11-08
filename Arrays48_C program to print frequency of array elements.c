// C program to print frequency of array elements
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int frequency(int n, int arr[], int freq[]);

int main()
{
    int n=15, arr[100], freq[100];
    srand(time(0));

    for(int i=0; i<=n; i++){
        arr[i]=rand()%50;
        freq[i]=-10;

        printf("\narr[%d]=%d", i, arr[i]);
    }

    frequency(15,arr,freq);

    return 0;
}

int frequency(int n, int arr[], int freq[]){
    int counter;
    for (int  i = 0; i <= n; i++){
            counter=1;
            for (int j = i+1; j <= n; j++){
                if (arr[i]==arr[j]){
                    counter++;
                    freq[j]=0;
                }
            }
            if(freq[i]!=0)
                freq[i]=counter;
        }

        for (int i = 0; i <= n; i++){
            if (freq[i]!=0){
                printf("\n%d comes %d times", arr[i], freq[i]);
            }
        }

    return 0;
}
