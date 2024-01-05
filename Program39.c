#include<stdio.h>
//C Program to Display the Descending order of given Number till 1 

//Input = 5 
//Output = 5 4 3 2 1 

void DisplayReverse(int iNo)
{
    int iCount = 0 ;

    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");

    printf("Reversed Order of a Given Number\n");

    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");

    for(iCount = iNo ; iCount >= 1 ; iCount--)
    {
        printf("%d\t",iCount);
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