#include<stdio.h>
int stack[20];
int top = -1;

void push(int x);
int pop();

int main(){
    char exp[20];
    char *e;
    int n1,n2,n3,num;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    e = exp;
    while(*e){
        if(isdigit(*e)){
            num = *e - 48;
            push(num);
        }
        else{
            n1 = pop();
            n2 = pop();
            switch(*e){
                case '+': n3 = n1+n2;
                    break;
                case '-': n3 = n1-n2;
                    break;
                case '*': n3 = n1*n2;
                    break;
                case '/': n3 = n2/n1;
                    break;
            }
            push(n3);
            //printf("\nStep : %d",n3);
        }
        e++;

    }

    printf("The result of the expression %s = %d\n\n",exp,pop());
    return 0;
}

void push(int x){
    stack[++top] = x;
}
int pop(){
    return stack[top--];
}
