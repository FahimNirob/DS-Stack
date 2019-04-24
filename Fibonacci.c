#include<stdio.h>
int fibo(int n);

int main(){
    int m = 0,n,c;
    printf("Enter negative value to terminate : ");
    while(n>0){
        scanf("%d",&n);
        printf("Fibonacci series : ");
        for(c=1; c<=n; c++){
            printf("%d ",fibo(m));
            m++;
        }
        printf("\n");
       // n=0;
    }
    return 0;
}

int fibo(int n){
    if(n==0 || n==1) return n;
    else return (fibo(n-1) + fibo(n-2));
}
