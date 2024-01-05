#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo )
{
    int iCount = 0 ;
    int iSum = 0 ;

    for(iCount = 1 ; iCount < iNo/2 ; iCount ++)
    {
        if((iNo%iCount)== 0)
        {
            iSum = iSum + iCount ;
        }
    }
    if(iSum == iNo)
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}

int main()
{
    int iValue = 0 ;
    int iAns = false ;

    printf("Enter any Number : \n");
    scanf("%d",&iValue);

    iAns = CheckPerfect(iValue);

    if(iAns == true )
    {
        printf("Number is Perfect Number\n");
    }
    else 
    {
        printf("Number is not Perfect Number");
    }

    return 0 ;
}