
// Singly Circular Linked List 

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct Node
{
    int Data ; 
    struct Node *Next ; 
};

typedef struct Node NODE ; 
typedef struct Node * PNODE ; 
typedef struct Node ** PPNODE ;

void InsertFirst(PPNODE First , PPNODE Last , int iNo)
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
void InsertLast(PPNODE First , PPNODE Last , int iNo)
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


void Display(PNODE First , PNODE Last)
{
    printf("Elements of Linked List are : \n") ; 
    
    do
    {
        printf("| %d |-> ",First->Data); 
        First = First -> Next ; 
    } while( First != Last -> Next );    
    printf("\n") ; 
}

int Count(PNODE First , PNODE Last)
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

void DeleteFirst(PPNODE First , PPNODE Last )
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

void DeleteLast(PPNODE First , PPNODE Last )
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

void InsertAtPos(PPNODE First , PPNODE Last , int no , int iPos ) //Same as that of the singly Linear Linked lIst 
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

void DeleteAtPos(PPNODE First , PPNODE Last ,int iPos )
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
    int iRet = 0 ; 
    PNODE Head = NULL ; 
    PNODE Tail = NULL ; 

    InsertFirst(&Head , &Tail , 51 ) ; 
    InsertFirst(&Head , &Tail , 21 ) ; 
    InsertFirst(&Head , &Tail , 11 ) ; 

    Display(Head , Tail) ; 

    InsertLast(&Head , &Tail , 101 ) ; 
    InsertLast(&Head , &Tail , 111 ) ; 
    InsertLast(&Head , &Tail , 121 ) ; 

    InsertAtPos(&Head , &Tail , 105 , 5 ) ; 

    Display(Head , Tail ); 

    iRet = Count(Head, Tail ) ; 
    printf("Number of Elements are : %d\n",iRet) ; 

    DeleteAtPos(&Head, &Tail , 5 ) ; 
    Display(Head , Tail ) ; 

    DeleteFirst(&Head, &Tail) ; 
    DeleteFirst(&Head, &Tail) ; 

    Display(Head , Tail ) ; 
    iRet = Count(Head , Tail ) ; 
    printf("number of Elements are : %d\n",iRet) ; 

    DeleteLast(&Head , &Tail ) ; 
    Display(Head , Tail ) ; 
    
    return 0 ; 
}