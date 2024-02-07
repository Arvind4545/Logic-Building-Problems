//Row : 4 
//Columns : 4 

/*
     * * * * 
     * * * * 
     * * * * 
     * * * * 
*/

#include<stdio.h>

void Display(int iRow , int iCol )
{
    int i = 0 ; 
    int j = 0 ; 

    for( j = 1 ; j <= iRow ; j++ )  //iRow he sets aahe ani iCol he iteration aahe
    {
        for(i = 1 ; i <= iCol ; i++)
        {
            printf("*\t") ;
        }
        printf("\n") ;
    }
}

int main()
{
    int iValue = 0 ; 
    int iValue2 = 0 ;

    printf("Enter Number of rows\n") ;
    scanf("%d",&iValue) ;

    printf("Enter the Number of columns\n") ;
    scanf("%d",&iValue2 ) ;

    Display(iValue , iValue2) ;
    
    return 0 ;
}