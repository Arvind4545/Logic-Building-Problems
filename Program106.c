/*
Row = 4 
Col = 4 ;

1 $ 3 $ 
1 $ 3 $ 
1 $ 3 $ 
1 $ 3 $ 

*/

/* 
Row = 4 
Col = 4 

* * * * 
2 2 2 2 
* * * *
4 4 4 4 

*/

#include<stdio.h>

void Display(int iRows , int Cols )
{
    int i = 0 ;
    int j = 0 ;

    for( i = 1 ; i <= iRows ; i++ )
    {
        for( j = 1 ; j <= Cols ; j++ )
        {
            if(j % 2 == 0 )
            {
                printf("$\t") ;
            }
            else
            {
                printf("%d\t",j) ;
            }
        }
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