#include "QueueType.h"
#include <iostream>

using namespace std;

QueueType::QueueType()
{
    front = NULL;
    rear = NULL;
}

bool QueueType::IsEmpty()
{
    return (front == NULL);
}

bool QueueType::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

void QueueType::EnQueue(StudentInfo newItem)
{
    if (IsFull())
        throw FullQueue();
    else
    {
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = newItem;
        newNode->next = NULL;


        if (IsEmpty())  // (front == NULL)
            front = newNode;
        else
            rear->next = newNode;

        rear = newNode;
    }
}

void QueueType::DeQueue(StudentInfo& item)
{
    if (IsEmpty())
        throw EmptyQueue();
    else
    {
        item = front->info;

        NodeType* tempPtr;
        tempPtr = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;

        delete tempPtr;
    }
}

void QueueType::MakeEmpty()
{
    NodeType* tempPtr;
    while (front != NULL)
    {
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;

//        ItemType a = 0;
//        while(front!=NULL){
//            DeQueue(a);
//        }

}

QueueType::~QueueType()
{
    MakeEmpty();
}
