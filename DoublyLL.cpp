#include<iostream>

using namespace std; 

template<class T>
struct NodeD 
{
    T data ; 
    struct NodeD *next ; 
    struct NodeD *prev;
};

template<class T>
using NODED = NodeD<T>; 

template<class T>
using PNODED = NodeD<T> *; 

template<class T>
using PPNODED = NodeD<T> **; 

template<class T>
class DoublyLL
{
    public : 
        PNODED<T> First ;
        int iNodeCnt ; 

        DoublyLL();
        void InsertFirst(T iNo); 
        void InsertLast(T iNo );
        void InsertAtPos(T iNo , int iPos ); 

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
};

template<class T>
DoublyLL<T>::DoublyLL()
{
    First = NULL ; 
    iNodeCnt = 0 ; 
}

template<class T>
void DoublyLL<T>::InsertFirst(T iNo)
{
    PNODED<T> newn = new NODED<T>;  
    newn->data = iNo;
    newn->next = NULL ; 
    newn->prev = NULL ; 

    if(First == NULL )
    {
        First = newn;
        iNodeCnt++; 
    }
    else 
    {
        newn->next = First ; 
        First -> prev = newn; 
        First = newn ; 
        iNodeCnt++; 
    }
}

template<class T>
void DoublyLL<T>::InsertLast(T iNo)
{
    PNODED<T> newn = new NODED<T>; 

    newn->data = iNo ; 
    newn->next = NULL;
    newn->prev = NULL; 

    if(First == NULL )
    {
        First = newn ; 
        iNodeCnt++; 
    }
    else 
    {
        PNODED<T> temp = First ; 
        while(temp -> next != NULL )
        {
            temp = temp -> next ; 
        }
        temp->next = newn; 
        newn->prev = temp ;
        iNodeCnt++; 
    }
}

template<class T>
void DoublyLL<T>::InsertAtPos(T iNo,int iPos)
{
    if( (iPos < 1 ) || (iPos > iNodeCnt + 1 ) )
    {
        cout<<"Invalid Position\n";
        return ; 
    }
    if(iPos == 1 )
    {
        InsertFirst(iNo);
    }
    else if(iPos == iNodeCnt + 1 )
    {
        InsertLast(iNo);
    }
    else 
    {
        PNODED<T> temp = First ; 
        PNODED<T> newn = new NODED<T> ; 
        newn->data = iNo; 
        newn->next = NULL;
        newn->prev=NULL;

        for(int iCnt = 1 ; iCnt < iPos - 1 ; iCnt++ )
        {
            temp =temp->next;
        }

        newn->next = temp ->next; 
        newn->prev = temp ; 
        temp->next = newn;
        iNodeCnt++;
    }
}

template<class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First == NULL )
    {
        cout<<"Linked List is Empty\n";
        return ; 
    }
    else if(First ->next == NULL )
    {
        delete First ; 
        First = NULL ; 
        iNodeCnt--;
    }
    else 
    {
        First = First -> next ; 
        delete First -> prev ;
        First -> prev = NULL ;
        iNodeCnt--;
    }
}

template<class T>
void DoublyLL<T>::DeleteLast()
{
    if(First == NULL )
    {
        cout<<"Linked List is Empty\n";
        return ; 
    }
    else if(First -> next == NULL )
    {
        delete First ; 
        First = NULL ; 
        iNodeCnt--;
    }
    else 
    {
        PNODED<T> temp = First ; 

        while(temp->next->next != NULL )
        {
            temp = temp -> next ; 
        }

        delete temp->next ; 
        temp->next = NULL ; 
        iNodeCnt--;
    }
}

template<class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    if((iPos<1)||(iPos>iNodeCnt))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos == iNodeCnt)
    {
        DeleteLast();
    }
    else 
    {
        PNODED<T> temp1=First; 
        PNODED<T> temp2=NULL ; 

        for(int iCnt = 1 ; iCnt < iPos - 1; iCnt++ )
        {
            temp1 = temp1 -> next ; 
        }

        temp2 = temp1 -> next; 
        temp1 -> next = temp2 -> next ; 
        delete temp2 ; 
        iNodeCnt--;
    }
}

template<class T>
void DoublyLL<T>::Display()
{
    PNODED<T> temp = First ; 

    cout<<"Elements of Doubly Linear Linked List : \n";

    cout<<"NULL";
    while(temp != NULL )
    {
        cout<<"<=>|"<<temp->data<<"|"; 
        temp = temp->next ; 
    }

    cout<<"<=>NULL\n";
}

int main()
{
    DoublyLL<char> *dobj = new DoublyLL<char>(); 

    dobj->InsertFirst(51); 
    dobj->InsertFirst(21); 
    dobj->InsertFirst(11); 

    dobj->Display();
    cout<<"Number of Nodes in Doubly Linear Linked List are : "<<dobj->iNodeCnt<<"\n";

    dobj->InsertLast(91); 
    dobj->InsertLast(101); 
    dobj->InsertLast(111); 

    dobj->Display();
    cout<<"Number of Nodes in Doubly Linear Linked List are : "<<dobj->iNodeCnt<<"\n";

    dobj->InsertAtPos(61,4); 
    dobj->InsertAtPos(71,5); 
    dobj->InsertAtPos(81,6); 

    dobj->Display();
    cout<<"Number of Nodes in Doubly Linear Linked List are : "<<dobj->iNodeCnt<<"\n";

    dobj->DeleteFirst();

    dobj->Display();
    cout<<"Number of Nodes in Doubly Linear Linked List are : "<<dobj->iNodeCnt<<"\n";

    dobj->DeleteLast();

    dobj->Display();
    cout<<"Number of Nodes in Doubly Linear Linked List are : "<<dobj->iNodeCnt<<"\n";

    dobj->DeleteAtPos(3);

    dobj->Display();
    cout<<"Number of Nodes in Doubly Linear Linked List are : "<<dobj->iNodeCnt<<"\n";
  
    return 0 ; 
}