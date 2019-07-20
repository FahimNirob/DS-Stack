// enQueue deQueue
#include<stdio.h>
#define SIZE 5

int items[SIZE];
int front = - 1, rear = -1;

void enQueue(int value);
void deQueue();
void display();

int main(){
    enQueue(10);
    enQueue(12);
    enQueue(14);
    enQueue(32);
    enQueue(19);
    display();
    deQueue();
    display();

}

void enQueue(int value){
    if(rear == SIZE-1){
        printf("Queue is full !\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear++;
        items[rear] = value;
        printf("Inserted : %d\n",items[rear]);
    }
}

void deQueue(){
    if(front == -1){
        printf("Queue is empty \n");
    }
    else{
        printf("Deleted : %d\n",items[front]);
        front++;
        if(front > rear){
            front = rear = -1;
        }
    }
}

void display(){
    if(rear == -1){
        printf("Queue is empty\n");
    }
    else{
        int i;
        printf("Queued elements : ");
        for(i=front;i<=rear;i++){
            printf("%d ",items[i]);
        }
    }
}
