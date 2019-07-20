// Towers of Hanoi
#include<stdio.h>
int Tower(int n,char BEG,char AUX,char END);

int main(){
    int i;
    printf("Enter the number of disks : ");
    scanf("%d",&i);
    Tower(i,'A','B','C');
    return 0;
}

int Tower(int n,char BEG,char AUX,char END){
    if(n == 1){
        printf("%c -> %c\n",BEG,END);
        return;
    }
    Tower(n-1,BEG,END,AUX);
    printf("%c -> %c\n",BEG,END);

    Tower(n-1,AUX,BEG,END);
    return;
}
