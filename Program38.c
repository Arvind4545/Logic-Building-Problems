// C Program to Display the Table of given Number

//Input : 5 
//Output :  5 10 15 20 25 30 35 40 45 50 

#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0 ;
    
    printf("_ _ _ _ __ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
    printf("Table of %d is : \n",iNo);
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");

    for(iCnt = 1 ; iCnt <= 10 ; iCnt++ )
    {
        printf("%d\n",iNo * iCnt);
    }
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
}

int main()
{
    int iValue = 0 ;
 
    printf("Enter any Number : \n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0 ;


}