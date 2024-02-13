
#include<iostream>

using namespace std ; 

#pragma pack(1)  
struct node 
{
    int data ; 
    struct node *next ; 
    struct node * prev ; 
}; 

typedef struct node NODE ; 
typedef struct node * PNODE ; 
typedef struct node ** PPNODE ; 

class DoublyCL 
{
    public : 
        PNODE First ; 
        PNODE Last ; 

        DoublyCL() ; 

        void InsertFirst(int no ) ; 
        void InsertLast(int no ) ; 
        void InsertAtPos(int no , int iPos ) ; 

        void DeleteFirst() ; 
        void DeleteLast() ; 
        void DeleteAtPos(int iPos ) ; 

        void Display() ;
        int Count() ; 
};

DoublyCL::DoublyCL()   //Default Constructor 
{
    First = NULL ; 
    Last = NULL ; 
}

void DoublyCL::InsertFirst(int no )
{
    PNODE newn = new NODE ; 

    newn -> data = no ; 
    newn -> next = NULL ; 
    newn -> prev = NULL ; 

    if(((First)==NULL)&&((Last)==NULL)) 
    {
        First = newn;
        Last = newn ;  
    }
    else
    {
        newn -> next = First ; 
        (First) -> prev = newn ; 
        First = newn ; 
    }

    (Last) -> next = First ; 
    (First)->prev = Last ; 
}

void DoublyCL::InsertLast(int no )
{
    PNODE newn = new NODE ; 

    newn -> data = no ; 
    newn -> next = NULL ; 
    newn -> prev = NULL ; 

    if(((First)==NULL)&&((Last)==NULL)) //LL is Empty 
    {
        First = newn;
        Last = newn ;  
    }
    else // If LL contains one or More Nodes 
    {
        (Last)-> next = newn ; 
        newn -> prev = Last ; 
        Last = newn ; 
    }
    (Last) -> next = First ; 
    (First)->prev = Last ; 
}

void DoublyCL::Display()
{
    PNODE temp = First ; 
    if(First == NULL && Last == NULL ) 
    {
        cout<<"Linked List is Empty"<<"\n" ; 
    }

    cout<<"Elements of Linked List are : "<<"\n" ;  
    do
    {
        cout<<"|"<<temp -> data <<"|<=>" ; 
        temp  = temp -> next ; 
    }while(temp != (Last)->next) ; 

    cout<<"\n" ; 
}

int DoublyCL::Count()
{
    PNODE temp = First ; 
    int iCnt = 0 ; 
    if(First == NULL && Last == NULL ) 
    {
        return iCnt ; 
    }

    do
    {
        iCnt++ ; 
        temp = temp -> next ; 
    }while(temp != (Last)->next) ; 

    return iCnt ; 
}

void DoublyCL::DeleteFirst()
{
    if((First)==NULL && (Last)==NULL )  //Empty LL
    {
        return ; 
    }
    else if( (First)==(Last)) // Single Node 
    {
        delete First ; 
        First = NULL ; 
        Last = NULL ; 
    }
    else //More than one Nodes 
    {
        (First) = (First ) -> next ; 
        delete First -> prev ;   //free(*First -> prev)

        (First)-> prev = Last ; 
        (Last) -> next = First ; 
    }
}

void DoublyCL::DeleteLast()
{
    if((First)==NULL && (Last)==NULL )  //Empty LL
    {
        return ; 
    }
    else if( (First)==(Last)) // Single Node 
    {
        delete First ; 
        First = NULL ; 
        Last = NULL ; 
    }
    else 
    {
        Last = (Last) -> prev ;
        delete First -> prev ; 

        (Last)->next = First ; 
        (First)->prev = Last ; 
    }
}

void DoublyCL::InsertAtPos(int no , int iPos )
{
    int iNodeCnt = Count() ; 
    PNODE temp = NULL ; 

    if((iPos < 1 )||(iPos > iNodeCnt + 1 ))
    {
        cout<<"Invalid Position"<<"\n" ;  
        return ; 
    }

    if(iPos == 1 )
    {
        InsertFirst( no ) ; 
    }
    else if(iPos == iNodeCnt + 1 )
    {
        InsertLast(no );
    }
    else 
    {
        PNODE newn = new NODE ; 
        newn -> data = no ;
        newn -> prev = NULL ; 
        newn -> next = NULL ; 

        temp = First ; 

        for(int iCnt = 0 ; iCnt < iPos - 1 ; iCnt++ )
        {
            temp = temp -> next ; 
        } 
        newn -> next = temp -> next ; 
        temp -> next -> prev = newn ;
        
        newn -> prev = temp ; 
        temp -> next = newn ; 
    }
}

void DoublyCL::DeleteAtPos(int iPos )
{
    int iNodeCnt = Count() ; 
    PNODE temp = NULL ; 

    if((iPos < 1 )||(iPos > iNodeCnt + 1 ))
    {
        cout<<"Invalid Position"<<"\n" ; 
        return ; 
    }

    if(iPos == 1 )
    {
        DeleteFirst() ; 
    }
    else if(iPos == iNodeCnt )
    {
        DeleteLast();
    }
    else 
    {
        temp = First ; 

        for(int iCnt = 0 ; iCnt < iPos - 1 ; iCnt++ )
        {
            temp = temp -> next ; 
        } 
        temp -> next = temp -> next -> next ; 
        delete temp -> next -> prev  ; 
        temp -> next -> prev = temp ; 
    }
}

int main()
{
    int iRet = 0 ;

    DoublyCL dobj ; 

    dobj.InsertFirst( 51 ) ; 
    dobj.InsertFirst(21 ) ; 
    dobj.InsertFirst(11 ) ; 
    
    dobj.InsertLast(101 ) ; 
    dobj.InsertLast(111 ) ; 
    dobj.InsertLast(121 ) ; 

    dobj.Display() ; 
    iRet = dobj.Count() ; 
    cout<<"Number of Nodes are : "<<iRet<<"\n" ; 

    dobj.InsertAtPos(105 , 5 ) ; 
    
    dobj.Display() ; 
    iRet = dobj.Count() ; 
    cout<<"Number of Nodes are : "<<iRet<<"\n" ; 

    dobj.DeleteAtPos(5 ) ; 
    dobj.Display() ; 
    iRet = dobj.Count( ) ; 
    cout<<"Number of Nodes are : "<<iRet<<"\n" ; 

    dobj.DeleteFirst() ; 

    dobj.DeleteLast() ;  
    
    dobj.Display() ; 
    iRet = dobj.Count() ; 
    cout<<"Number of Nodes are : "<<iRet<<"\n" ; 

    return 0 ; 
}

