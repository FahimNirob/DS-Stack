#include<stdio.h>
#define STACK_MAX 20


typedef struct S {
    int top;
    int data[STACK_MAX];
}Stack;

void push(Stack *s,int item);
int pop(Stack *s);

int main(){
    Stack my_stack;
    my_stack.top = 0;
    int item;
    int i,j,n,m;
     int value;

    printf("How many items to push onto Stack : ");
    scanf("%d",&n);
    printf("Push %d items:\n",n);
    for(i=0;i<n;i++){

        scanf("%d",&j);
        push(&my_stack,j);
        value = (&my_stack,j);
    }

    printf("How many items to pop : ");
    scanf("%d",&m);
    printf("\nPop items\n");
    for(i=0;i<m;i++){
        item =  pop(&my_stack);
        printf("%d ",item);
    }
    printf("\nStack after pop %d items:",m);
    for(i=0;i<n-m;i++){
        printf("%d ",value);
    }
}

// push
void push(Stack *s,int item){
    if(s->top < STACK_MAX){
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else printf("Stack is overflow ! \n");
}

//pop

int pop(Stack *s){
    int item;
    if(s->top == 0){
        printf("Stack is underflow\n");
    }
    else{
        s->top = s->top - 1;
        item = s->data[s->top];
    }
    return item;
}

