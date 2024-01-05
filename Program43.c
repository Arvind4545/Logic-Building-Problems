#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCount = 0 ;
    for(iCount = 1 ; iCount < iNo/2 ; iCount += 1 ) //Time Complexity of N/4
    {
        if((iNo % iCount == 0))
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