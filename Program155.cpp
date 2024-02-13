// To Create Queue Data Structure in Generic 
// Queue is considered as Linear Data Structure 
// Queue works on First In First Out Policy (FIFO)
// we will have to write InsertLast and DeleteFirst(Dequeue)

#include<iostream>
#include<stdbool.h>

using namespace std;

#pragma pack(1)
template<class T>
struct Node
{
    T data ; 
    struct Node *next ; 
};

template<class T>
using NODE = Node<T>;

template<class T>
using PNODE = Node<T> * ; 

template<class T>
using PPNODE = Node<T> **;

template<class T>
class Queue
{
    public : 
        PNODE<T> First ;
        int iNodeCnt ; 

        Queue();

        bool isQueueEmpty();
        void EnQueue(T iNo);
        T DeQueue();
        void Display();
};

template<class T>
Queue<T> :: Queue()
{
    First =NULL ;
    iNodeCnt = 0 ;
}

template<class T>
bool Queue<T>::isQueueEmpty()
{
    if(First == NULL )
    {
        return true ; 
    }
    else 
    {
        return false;
    }
}

template<class T>
void Queue<T>::EnQueue(T iNo)
{
    PNODE<T> newn = new NODE<T>;
    newn->data = iNo;
    newn->next = NULL; 
    if(First == NULL )
    {
        First = newn;
        iNodeCnt++;
    }
    else // Queue has Single Node 
    {
        PNODE<T> temp = First ; 

        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->next = newn ; 
        iNodeCnt++;
    }

    cout<<iNo<<" Enqueued in Queue\n";
}

template<class T>
T Queue<T>::DeQueue()
{
    int iValue = 0 ; 
    if(First == NULL )
    {
        cout<<"Unable to Dequeue Element Since Queue is Empty";
        return T(-1) ;
    }
    else if(First -> next == NULL )
    {
        iValue = First -> data ; 
        delete First ; 
        iNodeCnt--;
        return iValue ; 
    }
    else 
    {
        PNODE<T> temp = First ; 
        iValue = First->data;
        First = First -> next ; 
        delete temp;
        iNodeCnt--;
        return iValue;
    }
}

template<class T>
void Queue<T>::Display()
{
    if(First == NULL )
    {
        cout<<"Queue is Empty\n";
    }
    else 
    {
        PNODE<T> temp = First ; 
        cout<<"Elements of Queue are : \n";
        while(temp != NULL )
        {
            cout<<"|"<<temp->data<<"|->";
            temp= temp->next;
        }
        cout<<"NULL\n";
    }
}

int main()
{
    Queue <int>obj; 

    bool bRet = obj.isQueueEmpty();

    if(bRet == true )
    {
        cout<<"Queue is Empty\n";
    }
    else 
    {
        cout<<"Queue is not Empty\n";
    }

    obj.EnQueue(101);
    obj.EnQueue(51);
    obj.EnQueue(21);
    obj.EnQueue(11);

    obj.Display();
    cout<<"Number of Nodes in Queue are : "<<obj.iNodeCnt<<"\n";

    int iRet = obj.DeQueue();
    cout<<iRet<<" Dequeued Successfully\n";

    obj.Display();
    cout<<"Number of Nodess in Queue are : "<<obj.iNodeCnt<<"\n";

    return 0;
}