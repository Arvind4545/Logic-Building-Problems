
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

int main()
{
    return 0 ; 
}