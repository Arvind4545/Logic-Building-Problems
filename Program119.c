
/*
rows = 6 
Col = 6 

   $ $ $ $ $ $ 
   $ $       $ 
   $   $     $ 
   $     $   $ 
   $       $ $ 
   $ $ $ $ $ $ 


*/

/* 
Row = 4 
Col =  4


*/

#include<stdio.h>

void Display(int iRows , int Cols )
{
    int i = 0 ;
    int j = 0 ;

    if( iRows != Cols)
    {
        return ;
    }
    for( i = 1 ; i<= iRows ; i++ )
    {
        for(j = 1 ; j<= Cols ; j++ )
        {
            if((i == 1)|| (i == iRows ) || (j == 1 ) || (j == Cols) || (i == j ))
            {
                printf("$\t") ;
            }
            else
            {
                printf(" \t",i) ;
            }
        }
        printf("\n") ;
        printf("\n") ;

    }
}

int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    printf("Enter Number of Rows\n") ;
    scanf("%d",&iValue1) ;

    printf("Enter Number of Columns\n") ;
    scanf("%d",&iValue2) ;

    Display(iValue1 , iValue2 ) ;

    return 0 ; 
}
