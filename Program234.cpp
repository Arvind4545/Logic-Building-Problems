
#include<iostream>
using namespace std ; 

#pragma pack(1)
struct Node 
{
    int data ; 
    struct Node *next ; 
}

typedef struct Node NODE ; 
typedef struct Node * PNODE ; 
typedef struct Node ** PPNODE ; 

class SinglyCL 
{
    public : 
        PNODE First ; 
        PNODE Last ; 

        SinglyCL() ; 

        void InsertFirst(int no ) ; 
        void InsertLast(int no ) ; 
        void InsertAtPos(int no , int ipos ) ; 

        void DeleteFirst() ; 
        void DeleteLast() ; 
        void DeleteAtPos(int ipos ) ; 

        void Display() ; 
        int Count() ; 
} ; 

void SinglyCL::InsertFirst(int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)) ; 
    
    newn -> Data = iNo ; 
    newn -> Next = NULL ; 

    if( (*First == NULL ) && (*Last == NULL))//Empty Linked List 
    {
        *First = *Last = newn ; 
        (*Last)->Next = *First ; 
    }
    else 
    {
        newn -> Next = *First ; 
        *First = newn ; 
        (*Last)->Next = *First ;  // V 2 Important 
    }
}
void SinglyCL::InsertLast(int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)) ; 
    
    newn -> Data = iNo ; 
    newn -> Next = NULL ; 

    if( (*First == NULL ) && (*Last == NULL))//Empty Linked List 
    {
        *First = *Last = newn ; 
        (*Last)->Next = *First ; 
    }
    else //LL contains at least one Node 
    {
        (*Last)-> Next = newn ; 
        *Last = newn  ; 
        (*Last)->Next = *First ; 
    }
}


void SinglyCL::Display()
{
    printf("Elements of Linked List are : \n") ; 
    
    do
    {
        printf("| %d |-> ",First->Data); 
        First = First -> Next ; 
    } while( First != Last -> Next );    
    printf("\n") ; 
}

int SinglyCL:: Count()
{
    int iCnt = 0 ; 
    printf("Elements of Linked List are : \n") ; 
    
    do
    {
        iCnt++ ; 
        First = First -> Next ; 
    } while( First != Last -> Next );    
    return iCnt ; 
}

void SinglyCL::DeleteFirst()
{
    PNODE temp = *First ; 
    if((*First == NULL) &&(*Last == NULL ) ) // LL is Empty 
    {
        return ; 
    }
    else if((*First)==(*Last)) // It Accomodates if condition... so sequece of selection must me maintained 
    {
        *First = (*First) -> Next ; 
        free(temp ) ; 
        (*Last)-> Next = *First ; 
    }
    else // Linked List contains more than 1 Nodes 
    {
        (*First) = (*First) -> Next; 
        free((*Last)->Next) ; 
        (*Last) -> Next = (*First) ; 

    }
}

void SinglyCL::DeleteLast()
{
    PNODE temp = *First ; 
    if((*First == NULL) &&(*Last == NULL ) ) // LL is Empty 
    {
        return ; 
    }
    else if((*First)==(*Last)) // It Accomodates if condition... so sequece of selection must me maintained 
    {
        free(*First) ; 
        *First = NULL ; 
        *Last = NULL ; 
    }
    else // Linked List contains more than 1 Nodes 
    {
        while(temp -> Next != (*Last)) //while(temp -> next -> next != (*First))
        {
            temp = temp -> Next ; 
        }
        free(temp -> Next) ; //free(*Last)
        *Last = temp ; 
        (*Last) -> Next = *First ; 
    }
}

void SinglyCL::InsertAtPos( int no , int iPos ) //Same as that of the singly Linear Linked lIst 
{
    int iNodeCnt = 0 , iCnt = 0 ; 
    iNodeCnt = Count(*First , *Last ) ; 
    PNODE newn = NULL ; 
    PNODE temp = *First ; 

    if((iPos < 1)||(iPos > iNodeCnt + 1))
    {
        printf("Invalid Position\n") ; 
        return ; 
    }
    if(iPos == 1)
    {
        InsertFirst(First , Last , no ) ; 
    }
    else if(iPos == iNodeCnt + 1 )
    {
        InsertLast(First , Last , no ) ; 
    }
    else // if iPos > 1 and iPos < iNodeCnt 
    {
        newn = (PNODE)malloc(sizeof(NODE)) ; 
        newn -> Data = no ; 
        newn -> Next = NULL ; 

        for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt++ )
        {
            temp = temp -> Next ; 
        }

        newn -> Next = temp -> Next ; 
        temp -> Next = newn ; 
    }
}

void SinglyCL::DeleteAtPos(int iPos )
{
    int iNodeCnt = 0 , iCnt = 0 ; 
    iNodeCnt = Count(*First , *Last ) ; 
    PNODE temp1 = *First ;
    PNODE temp2 = NULL ;  

    if((iPos < 1)||(iPos > iNodeCnt))
    {
        printf("Invalid Position\n") ; 
        return ; 
    }
    if(iPos == 1)
    {
        DeleteFirst(First , Last ) ; 
    }
    else if(iPos == iNodeCnt )
    {
        DeleteLast(First , Last ) ; 
    }
    else // if iPos > 1 and iPos < iNodeCnt 
    {
        for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt++ )
        {
            temp1 = temp1 -> Next ; 
        }
        temp2 = temp1 -> Next ; 
        temp1 -> Next =  temp2 -> Next ; 
        free(temp2 ) ; 
    }
}

int main()
{
    SinglyCL obj ; 

    int iRet = 0 ; 

    obj.InsertFirst( 51 ) ; 
    obj.InsertFirst(21 ) ; 
    obj.InsertFirst(11 ) ; 

    obj.Display() ; 

    obj.InsertLast(101 ) ; 
    obj.InsertLast(111 ) ; 
    obj.InsertLast(121 ) ; 

    obj.InsertAtPos(105 , 5 ) ; 

    obj.Display(); 

    iRet = obj.Count() ; 
    printf("Number of Elements are : %d\n",iRet) ; 

    obj.DeleteAtPos( 5 ) ; 
    obj.Display() ; 

    obj.DeleteFirst() ; 
    obj.DeleteFirst() ; 

    obj.Display() ; 
    iRet = obj.Count() ; 
    printf("number of Elements are : %d\n",iRet) ; 

    obj.DeleteLast() ; 
    obj.Display() ; 
    
    return 0 ; 
}
