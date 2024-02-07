//Row : 4 
//Columns : 4 

/*
     * * * * 
     * * * * 
     * * * * 
     * * * * 
*/

#include<stdio.h>

void Display(int iRow , int iCol )   //N ^ 2 : Time Complexity 
{
    int i = 0 ; 
    int j = 0 ; 

    if(iRow < 0 )   //Updators 
    {
        iRow = -iRow ;
    }

    if(iCol < 0 )  //Updators 
    {
        iCol = -iCol ;
    }

    for( j = 1 ; j <= iRow ; j++ )  //iRow he sets aahe ani iCol he iteration aahe
    {
        for(i = 1 ; i <= iCol ; i++)  //Inner  //4 of Outer 
        {
            printf("*\t") ; //4 of Innner 
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