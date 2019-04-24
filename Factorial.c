#include<stdio.h>
int factorial(int n);

int main(){
    int a;
    printf("Enter a positive integer : ");
    scanf("%d",&a);
    printf("Factorial of %d = %d\n",a,factorial(a));
    return 0;
}

int factorial(int n){
    if(n >= 1) return n*factorial(n-1);
    else return 1;
}
