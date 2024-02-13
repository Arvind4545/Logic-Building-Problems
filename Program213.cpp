
#include<iostream>

using namespace std ;

#pragma pack(1)
struct Node
{
    int Data ; 
    struct Node *Next ; 
};

class SinglyLL  //Pure Decalaration of class 
{
    public : 
        PNODE First ; //Characteristics 
        int iCount ; 

        //Behaviours
        SinglyLL(); 

        void InsertFirst(int iNo ) ; 
        void Insertlast(int iNo) ; 
        void InsertAtPosition(int iNo, int iPos) ;

        void DeleteFirst() ; 
        void DeleteLast();
        void DeleteAtPos(int iPos) ; 

        void Display() ; 
}; 

typedef struct Node NODE ; 
typedef struct Node * PNODE ; 
typedef struct Node ** PPNODE ;

int main()
{
    SinglyLL obj1 ; 
    SinglyLL obj2 ; 

    return 0 ; 
}

//icount is going to reduce the time complexity of our Application 
//There is no need to write count function 