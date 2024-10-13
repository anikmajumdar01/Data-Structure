#ifndef QueueTYPE_H_INCLUDED
#define QueueTYPE_H_INCLUDED
class FullQueue
{};
class EmptyQueue
{};

class QueueType
{
    struct NodeType
    {
        StudentInfo info;
        NodeType* next;
    };
public:
    QueueType();
    ~QueueType();
    void MakeEmpty();
    void EnQueue(StudentInfo);
    void DeQueue(StudentInfo&);
    bool IsEmpty();
    bool IsFull();
private:
    NodeType *front, *rear;
};
#include "QueueType.tpp"

#endif // QueueTYPE_H_INCLUDED
