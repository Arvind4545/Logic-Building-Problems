#include<stdio.h>

void DisplayEvenFacors(int iNo)
{
    int iCount = 0 ;
    for(iCount = 1 ; iCount < iNo/2 ; iCount++) // Time Complexity of N /2
    {
        if((iNo % iCount == 0) && (iCount % 2)==0)
        {
            printf("%d\n",iCount);
        }
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0 ;
}