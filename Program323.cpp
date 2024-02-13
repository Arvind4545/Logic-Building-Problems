//To create a Generic Stack 
//Stack works on LIFO Policy 
// LIFO stands for Last In First Out Policy 
// So, We will create stack using DeleteFirst and InsertFirst
// This reduces time complexity by N 
// Push : InsertFirst
// Pop : DeleteFirst  
// But we have used InsertFirst and deletefirst 

#include<iostream>

using namespace std ; 

template <class T>
struct node 
{
    T data ; 
    struct node *next ; 
}; 

template <class T>
class Stack 
{
    public : 
        struct node<T> *First ; 
        int iCount ; 

        Stack() ; 

        bool IsStackEmpty() ; 
        void Push(T no) ; /// Insert
        T Pop() ; // Delete 
        void Display() ; 
}; 

template <class T>
Stack<T> :: Stack()
{
    First = NULL ; 
    iCount = 0 ; 
}

template <class T>
bool Stack<T> :: IsStackEmpty()
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
void Stack<T> :: Push(T no )  // InsertFirst 
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
        newn -> next = First ; 
        First = newn ; 
    }
    iCount++ ; 
    cout<<no<<" Gets Pushed in the Stack Successfully"<<"\n" ; 
}

template <class T>
T Stack<T> :: Pop() // DeleteLast 
{
    if(First == NULL )
    {
        cout<<"Unable to Pop the element as Stack is Empty"<<"\n" ; 
        return -1 ; 
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
void Stack<T> :: Display()
{
    if(First == NULL )
    {
        cout<<"Stack is Empty"<<"\n" ; 
    }
    else 
    {
        cout<<"Elements of Stack are : "<<"\n" ; 

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
    Stack <int>obj ; 

    obj.Push(11) ; 
    obj.Push(21) ; 
    obj.Push(51) ; 
    obj.Push(101) ;

    obj.Display() ; 

    int iRet = obj.Pop() ; 
    cout<<"Poped Element is : "<<iRet<<"\n" ; 

    iRet = obj.Pop() ; 
    cout<<"Poped Element is : "<<iRet<<"\n" ; 

    obj.Display() ;  
    
    return 0 ; 
}