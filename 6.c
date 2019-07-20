#include<stdio.h>
// quick sort

void quicksort(int num[20],int first,int last);

int main(){
    int num[20],i,n;
    printf("How many numbers to insert : ");
    scanf("%d",&n);
    printf("\nEnter numbers  : ");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    quicksort(num,0,n-1);
    printf("\n After quick sorting : ");
    for(i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    return 0;
}

void quicksort(int num[20],int first,int last){
    int i,j,pivot,temp;

    if(first<last){
        pivot = first;
        i = first;
        j = last;

        while(i<j){
            while((num[i] <= num[pivot]) && i<last){
                i++;
            }
            while(num[j] > num[pivot]){
                j--;
            }
            if(i<j){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
        temp = num[pivot];
        num[pivot] = num[j];
        num[j] = temp;

        quicksort(num,first,j-1);
        quicksort(num,j+1,last);
    }
}
