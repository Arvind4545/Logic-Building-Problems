
#include<iostream>

using namespace std ;

#pragma pack(1)
struct Node
{
    int Data ; 
    struct Node *Next ; 
};

typedef struct Node NODE ; 
typedef struct Node * PNODE ; 
typedef struct Node ** PPNODE ;

class SinglyLL  //Pure Decalaration of class 
{
    public : 
        PNODE First ; //Characteristics 
        int iCount ; 

        //Behaviours
        SinglyLL(); 

        void InsertFirst(int iNo ) ; 
        void InsertLast(int iNo) ; 
        void InsertAtPosition(int iNo, int iPos) ;

        void DeleteFirst() ; 
        void DeleteLast();
        void DeleteAtPosition(int iPos) ; 

        void Display() ; 
}; 

/*
Return_Value Class_Name::Function_Name(Parameters)
{
}
*/

SinglyLL::SinglyLL()
{
    First = NULL ; 
    iCount = 0 ; 
}

void SinglyLL::InsertFirst(int iNo) 
{

}

void SinglyLL::InsertLast(int iNo) 
{
}

void SinglyLL :: InsertAtPosition(int iNo , int iPos ) 
{

}

void SinglyLL :: DeleteFirst() 
{

}

void SinglyLL :: DeleteLast() 
{

}

void SinglyLL :: DeleteAtPosition(int iPos)
{

}

void SinglyLL :: Display()
{

}

int main()
{
    SinglyLL obj1 ; 

    cout<<sizeof(obj1)<<"\n" ; 
    cout<<"First Pointer Contains : "<<obj1.First<<"\n" ; 
    cout<<"Number of Nodes are : "<<obj1.iCount<<"\n" ; 

    return 0 ; 
}

//icount is going to reduce the time complexity of our Application 
//There is no need to write count function 