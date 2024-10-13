
#include "Queue.h"

Queue::Queue(){
    this->front = -1;
    this->rear = -1;
}


bool Queue::isEmpty(){
    return (this->front == -1 && this->rear == -1);
}


bool Queue::isFull(){
    return ((this->rear+1)%MAX_SIZE==this->front);

}


void Queue::enQueue(int item){
    if(isFull())
        cout<<"Queue is full"<<endl;
    else if(isEmpty()){
        this->front++;
        this->rear++;
        data[this->rear] = item;
    }
    else
    {
        this->rear=(this->rear+1)%MAX_SIZE;


        data[this->rear] = item;
    }
}


void Queue::deQueue(){
    if(isEmpty())
        cout<<"Queue is empty"<<endl;
    else if(this->front==this->rear){
        this->front = -1;
        this->rear = -1;
    }
    else{
        this->front=(this->front+1)%MAX_SIZE;

    }
}


int Queue::getFront(){
    if(isEmpty())
        cout<<"Queue is empty"<<endl;
    return data[this->front];
}
