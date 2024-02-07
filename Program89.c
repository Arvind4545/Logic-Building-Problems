
//Accept one Number from User and Print the Natural Numbers in Reverse Order till 1 

//Input :  4
//Output : 4 3 2 1 


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    for(int iCnt = iNo ; iCnt > 0 ; iCnt-- )
    {
        printf("%d\t",iCnt) ;
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number\n") ;
    scanf("%d",&iValue) ;

    Display(iValue) ;
    
    return 0 ; 
}