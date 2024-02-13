
#include<stdio.h>
#include<stdlib.h>

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

void InsertFirst(PPNODE First , PPNODE Last , int no )
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)) ; 

    newn -> data = no ; 
    newn -> next = NULL ; 
    newn -> prev = NULL ; 

    if(((*First)==NULL)&&((*Last)==NULL)) //LL is Empty 
    {
        *First = newn;
        *Last = newn ;  
    }
    else // If LL contains one or More Nodes 
    {
        newn -> next = *First ; 
        (*First) -> prev = newn ; 
        *First = newn ; 
    }

    (*Last) -> next = *First ; 
    (*First)->prev = *Last ; 
}

void InsertLast(PPNODE First , PPNODE Last , int no )
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)) ; 

    newn -> data = no ; 
    newn -> next = NULL ; 
    newn -> prev = NULL ; 

    if(((*First)==NULL)&&((*Last)==NULL)) //LL is Empty 
    {
        *First = newn;
        *Last = newn ;  
    }
    else // If LL contains one or More Nodes 
    {
        (*Last)-> next = newn ; 
        newn -> prev = *Last ; 
        *Last = newn ; 
    }
    (*Last) -> next = *First ; 
    (*First)->prev = *Last ; 
}

void Display(PNODE First , PNODE Last )
{
    if(First == NULL && Last == NULL ) 
    {
        printf("Linked List is empty") ; 
    }

    printf("Linked List : \t") ; 
    do
    {
        printf("|%d|<=>",First -> data ) ; 
        First = First -> next ; 
    }while(First != (Last)->next) ; 

    printf("\n") ; 
}

int Count(PNODE First , PNODE Last )
{
    int iCnt = 0 ; 
    if(First == NULL && Last == NULL ) 
    {
        return iCnt ; 
    }

    do
    {
        iCnt++ ; 
        First = First -> next ; 
    }while(First != (Last)->next) ; 

    return iCnt ; 
}

void DeleteFirst(PPNODE First , PPNODE Last )
{
    if((*First)==NULL && (*Last)==NULL )  //Empty LL
    {
        return ; 
    }
    else if( (*First)==(*Last)) // Single Node 
    {
        free(*First ); 
        *First = NULL ; 
        *Last = NULL ; 
    }
    else //More than one Nodes 
    {
        (*First) = (*First ) -> next ; 
        free((*First)-> prev ) ;  //free(*First -> prev)

        (*First)-> prev = *Last ; 
        (*Last) -> next = *First ; 
    }
}

void DeleteLast(PPNODE First , PPNODE Last )
{
    if((*First)==NULL && (*Last)==NULL )  //Empty LL
    {
        return ; 
    }
    else if( (*First)==(*Last)) // Single Node 
    {
        free(*First ); 
        *First = NULL ; 
        *Last = NULL ; 
    }
    else //More than one Nodes 
    {
        *Last = (*Last) -> prev ;
        free((*First)-> prev ) ;  //free((*last)-> next ) ;

        (*Last)->next = *First ; 
        (*First)->prev = *Last ; 
    }
}

void InsertAtPos(PPNODE First , PPNODE Last , int no , int iPos )
{
    int iNodeCnt = Count( *First  , *Last ) ; 
    PNODE temp = NULL ; 

    if((iPos < 1 )||(iPos > iNodeCnt + 1 ))
    {
        printf("Invalid Position\n") ; 
        return ; 
    }

    if(iPos == 1 )
    {
        InsertFirst(First , Last , no ) ; 
    }
    else if(iPos == iNodeCnt + 1 )
    {
        InsertLast(First , Last , no );
    }
    else 
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = no ;
        newn -> prev = NULL ; 
        newn -> next = NULL ; 

        temp = *First ; 

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

void DeleteAtPos(PPNODE First , PPNODE Last ,int iPos )
{
    int iNodeCnt = Count( *First  , *Last ) ; 
    PNODE temp = NULL ; 

    if((iPos < 1 )||(iPos > iNodeCnt + 1 ))
    {
        printf("Invalid Position\n") ; 
        return ; 
    }

    if(iPos == 1 )
    {
        DeleteFirst(First , Last) ; 
    }
    else if(iPos == iNodeCnt )
    {
        DeleteLast(First , Last);
    }
    else 
    {
        temp = *First ; 

        for(int iCnt = 0 ; iCnt < iPos - 1 ; iCnt++ )
        {
            temp = temp -> next ; 
        } 
        temp -> next = temp -> next -> next ; 
        free(temp -> next -> prev ) ; 
        temp -> next -> prev = temp ; 
    }
}

int main()
{
    PNODE Head = NULL ; 
    PNODE Tail = NULL ; 
    int iRet = 0 ;

    InsertFirst(&Head , &Tail , 51 ) ; 
    InsertFirst(&Head , &Tail , 21 ) ; 
    InsertFirst(&Head , &Tail , 11 ) ; 
    
    InsertLast(&Head , &Tail , 101 ) ; 
    InsertLast(&Head , &Tail , 111 ) ; 
    InsertLast(&Head , &Tail , 121 ) ; 

    Display(Head , Tail ) ; 
    iRet = Count(Head , Tail ) ; 
    printf("Number of Nodes are : %d \n",iRet) ;

    InsertAtPos(&Head , &Tail , 105 , 5 ) ; 
    
    Display(Head , Tail ) ; 
    iRet = Count(Head , Tail ) ; 
    printf("Number of Nodes are : %d \n",iRet) ;

    DeleteAtPos(&Head , &Tail , 5 ) ; 
    Display(Head , Tail ) ; 
    iRet = Count(Head , Tail ) ; 
    printf("Number of Nodes are : %d \n",iRet) ;

    DeleteFirst(&Head , &Tail ) ; 

    DeleteLast(&Head , &Tail ) ;  
    
    Display(Head , Tail ) ; 
    iRet = Count(Head , Tail ) ; 
    printf("Number of Nodes are : %d \n",iRet) ;

    return 0 ; 
}

