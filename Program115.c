
/*
rows = 6 
Col = 6 

$ $ $ $  $ $ 
* * * *  * * 
* * * *  * * 
* * * *  * * 
* * * *  * * 
$ $ $ $ $ $ 

*/

/* 
Row = 4 
Col =  4

# 1 1 1 
2 # 2 2 
3 3 # 3 
4 4 4 # 

*/

#include<stdio.h>

void Display(int iRows , int Cols )
{
    int i = 0 ;
    int j = 0 ;
    int iNo = 0 ;

    if(iRows != Cols) //Filter 
    {
        printf("Row Number and Column Numbers are Different\n") ;
        return ; 
    
    }


    for( i = 1 ; i<= iRows ; i++ )
    {
        for(j = 1 ; j<= Cols ; j++ )
        {
            if((i == 1)|| (i == iRows) )
            {
                printf("#\t") ;
            }
            else 
            {
                printf("*\t",i) ;
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
