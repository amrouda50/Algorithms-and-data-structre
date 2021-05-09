#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
int data;
struct Node* next;
}Node;
Node* front = NULL;
Node* rear = NULL;
int enqueue(int val){
Node* t = (int *)malloc(sizeof(Node));
t->data = val;
t->next = NULL;
if(front == NULL){
    front = t;
    rear = t;
}
else{
        if(t == NULL){
            printf("queue is full\n");
        }
        else{
    rear->next = t;
    rear = t;}
}

}
int isEmpty(){
return front == NULL;
}
void display(Node* x){
while(x !=NULL){
    printf("%d " ,x->data );
    x = x->next;
}
}
int dequeue(Node* x){
    int a = -1;
    struct Node* t;
if(front == NULL){
    printf("queue is empty!\n");
}
else{
    a = front->data;
    t = front;
    front = front->next;
    free(t);
}
return a;


}


#endif // QUEUE_H_INCLUDED
