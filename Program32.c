//C programt to Display Factors of given Number with reduced Time Complexity
#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0 ;

    printf("Factors of %d are :\n",iNo);

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ ) //Reduced Time Complexity//O(N/2): Order of N/2
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }       
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    DisplayFactors(iValue);

    return 0 ;
}