
//Doubly Linear Linked List 

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct Node
{
    int Data ; 
    struct Node *next ; 
    struct Node *prev ;  //X : New Line 
};

typedef struct Node NODE ; 
typedef struct Node * PNODE ; 
typedef struct Node ** PPNODE ;  

void InsertFirst(PPNODE First , int no) 
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)) ; 

    newn->Data = no ; 
    newn->prev = NULL ;  // X 
    newn->next = NULL ; 

    if(*First == NULL )
    {
        *First = newn ; 
    }
    else
    {
        newn -> next = *First ; 
        (*First) -> prev = newn ; //X 
        *First = newn ; 


    }
}

void InsertLast(PPNODE First , int no) 
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)) ; 
    PNODE temp = *First ; 

    newn->Data = no ; 
    newn->prev = NULL ;  // X 
    newn->next = NULL ; 

    if(*First == NULL )
    {
        *First = newn ; 
    }
    else
    {
        while(temp -> next != NULL )
        {
            temp = temp ->next ; 
        }

        temp -> next = newn ; 
        newn -> prev = temp ;  //X 
    }
}

void Display(PNODE First)
{
    printf("Elements of Linked List are\n") ; 

    while(First != NULL )
    {
        printf(" | %d |<=> ",First->Data) ; 
        First = First->next ; 
    }
    printf("NULL\n") ; 
}

int Count(PNODE First)
{
    int iCnt = 0; 
    printf("Elements of Linked List are\n") ; 

    while(First != NULL )
    {
        iCnt ++ ; 
        First = First->next ; 
    }

    return iCnt ; 
}

void DeleteFirst(PPNODE First )
{
    if(*First == NULL ) //LL is Empty 
    {
        return ; 
    }
    else if((*First)->next == NULL) //LL Contains 1 Node 
    {
        free(*First) ; 
        *First = NULL ; 
    }
    else 
    {
        *First = (*First)->next ; 
        free((*First)->prev) ;    // X 
        (*First)->prev = NULL ;   // X 
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First ; 

    if(*First == NULL ) //LL is Empty 
    {
        return ; 
    }
    else if((*First)->next == NULL) //LL Contains 1 Node 
    {
        free(*First) ; 
        *First = NULL ; 
    }
    else  //LL Contains more than 1 Node 
    {
        while(temp->next->next != NULL )
        {
            temp = temp-> next ; 
        }
        free(temp->next) ; 
        temp -> next = NULL ; 
    }
}

void InsertAtPos(PPNODE First, int no, int ipos)
{
    int NodeCnt = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First);

    if((ipos < 1) || (ipos > (NodeCnt + 1)))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First,no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->Data = no;
        newn->next = NULL;
        newn->prev = NULL ;

        temp = *First;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp->next -> prev = newn;  // X 
        temp->next = newn ; 
        newn -> prev = temp ;  // X 
    }
}

void DeleteAtPos(PPNODE First , int iPos) 
{
    int iCnt = 0 , NodeCnt = 0 ; 
    PNODE temp1 = NULL ; 
    PNODE temp2 = NULL ; 

    NodeCnt = Count(*First) ; 

    if((iPos < 1 )||(iPos > NodeCnt))
    {
        printf("Invalid Position\n") ; 
        return  ; 
    }

    if(iPos == 1)
    {
        DeleteFirst(First) ;
    }
    else if(iPos == NodeCnt)
    {
        DeleteFirst(First) ; 
    }
    else
    {
        temp1 = *First ; 
        for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt++ )
        {
            temp1 = temp1 -> next ; 
        }
        temp2 = temp1 -> next ; 
        temp1 -> next = temp2->next ;//temp1 -> next = temp->next->next ; 
        temp2 -> next -> prev = temp1 ; 
        free(temp2) ; 
    }
}

int main()
{
    int iRet = 0 ; 
    PNODE Head = NULL ; 

    InsertFirst(&Head ,51) ; 
    Display(Head) ; 

    InsertFirst(&Head ,21) ; 
    Display(Head) ; 

    InsertFirst(&Head ,11) ; 
    Display(Head) ; 


    InsertLast(&Head , 101) ;
    Display(Head) ; 
 
    InsertLast(&Head , 111) ; 
    Display(Head) ; 

    InsertLast(&Head , 121) ; 
    Display(Head) ; 

    DeleteFirst(&Head);
    Display(Head) ; 
    
    iRet = Count(Head) ; 
    printf("Number of elements are : %d\n",iRet) ; 

    InsertAtPos(&Head , 105 , 5 ) ; 
    Display(Head) ; 

    DeleteAtPos(&Head,5) ; 
    Display(Head) ; 

    DeleteFirst(&Head) ; 
    DeleteLast(&Head) ; 

    Display(Head) ; 

    iRet = Count(Head) ; 
    printf("Number of elements are : %d\n",iRet) ; 
   
    return 0; 
}