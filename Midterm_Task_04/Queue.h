#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
using namespace std;
const int MAX_SIZE = 7;

class emptyQueue{};
class fullQueue{};

template <class ItemType>
class Queue{

private:
    ItemType *data;
    int front;
    int rear;
    int size;

public:
    Queue();
    Queue(int max);
    ~Queue();
    bool isEmpty();
    bool isFull();
    void enQueue(ItemType);
    void deQueue();
    ItemType getFront();
};
#include "Queue.tpp"
#endif // QUEUE_H_INCLUDED
