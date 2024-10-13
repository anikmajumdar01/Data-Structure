#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
using namespace std;
const int MAX_SIZE = 100;


class Queue{

private:
    int data [MAX_SIZE];
    int front;
    int rear;

public:
    Queue();
    bool isEmpty();
    bool isFull();
    void enQueue(int);
    void deQueue();
    int getFront();
};
#include "Queue.tpp"
#endif // QUEUE_H_INCLUDED

