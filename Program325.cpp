// To Create Queue Data Structure in Generic 
// Queue is considered as Linear Data Structure 
// Queue works on First In First Out Policy (FIFO)
// we will have to write InsertLast and DeleteFirst(Dequeue)
// Enqueue means InsertLast
// Dequeue means DeleteFirst 
// Also refer 155.cpp 

#include<iostream>

using namespace std ; 

template <class T>
struct node 
{
    T data ; 
    struct node *next ; 
}; 

template <class T>
class Queue
{
    public : 
        struct node<T> *First ; 
        int iCount ; 

        Queue<T>() ; 

        bool IsQueueEmpty() ; 
        void EnQueue(T no) ; /// Insert
        T DeQueue() ; // Delete 
        void Display() ; 
}; 

template <class T>
Queue<T> :: Queue()
{
    First = NULL ; 
    iCount = 0 ; 
}

template <class T>
bool Queue<T> :: IsQueueEmpty()
{
    if(iCount == 0 )
    {
        return true ; 
    }
    else 
    
    {
        return false ; 
    }
}

template <class T>
void Queue<T> :: EnQueue(T no )  // InsertLast 
{
    struct node<T> *newn = new node<T> ; 

    newn -> data = no ; 
    newn -> next = NULL ; 

    if(First == NULL)
    {
        First = newn ; 
    }
    else 
    {
        struct node<T> *temp = First ; 

        while(temp -> next != NULL )
        {
            temp = temp-> next ; 
        }

        temp -> next = newn ; 
    }
    iCount++ ; 
}

template <class T>
T Queue<T> :: DeQueue() // DeleteFirst 
{
    if(First == NULL )
    {
        cout<<"Unable to Remove the element as Queue is Empty"<<"\n" ; 
        return (T)-1 ; 
    }

    else 
    {
        T Value = First->data ; 
        struct node<T> *temp = First ; 

        First = First -> next ; 
        delete temp ; 

        iCount-- ; 
        return Value ; 
    }
    
}

template <class T>
void Queue<T> :: Display()
{
    if(First == NULL )
    {
        cout<<"Queue is Empty"<<"\n" ; 
    }
    else 
    {
        cout<<"Elements of Queue are : "<<"\n" ; 

        struct node<T> *temp = First ; 

        while(temp != NULL )
        {
            cout<<"|"<<temp->data<<"|-> " ; 
            temp = temp -> next ; 
        }
        cout<<"NULL"<<"\n" ; 
    }
}

int main()
{
    Queue <int>obj ; 

    obj.EnQueue(11) ; 
    obj.EnQueue(21) ; 
    obj.EnQueue(51) ; 
    obj.EnQueue(101) ; 

    obj.Display() ; 

    int iRet = obj.DeQueue() ; 
    cout<<"Removed Element is : "<<iRet<<"\n" ; 

    iRet = obj.DeQueue() ; 
    cout<<"Removed Element is : "<<iRet<<"\n" ; 

    obj.Display() ;  
    
    return 0 ; 
}