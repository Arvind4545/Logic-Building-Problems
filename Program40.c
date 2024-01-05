#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCount = 0 ;

    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");

    printf("Reversed Order of a Given Number\n");

    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");

    iCount = iNo ;

    while(iCount >= 0 )
    {
        printf("%d\t",iCount);
        iCount--;
    }
    printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _  __ ___ __ ");

}

int main()
{
    int iValue = 0 ;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0 ;
}