
#include<iostream>

using namespace std ; 

#pragma pack(1)
struct Node 
{
    int data ; 
    struct node *next ; 
}; 

class Stack 
{
    public : 
        struct node *First ; 
        int iCount ; 

        Stack() ; 

        bool IsStackEmpty() ; 
        void Push(int no) ; /// Insert
        int Pop() ; // Delete 
        void Display() ; 
}; 

Stack :: Stack()
{

}

bool Stack :: IsStackEmpty()
{

}

void Stack :: Push(int no )
{

}

int Stack :: Pop() 
{

}

void Stack :: Display()
{
    
}

int main()
{
    return 0 ; 
}