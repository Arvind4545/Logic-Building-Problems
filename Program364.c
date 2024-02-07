#include<stdio.h>

int UpperCaseR(char *str)
{
    static int iCnt =0 ; 

    if(*str != '\0')
    {
        if(*str <= 'Z' && *str >= 'A')
        {
            iCnt++ ; 
        }
        str++ ; 
        UpperCaseR(str) ; 
    }
    return iCnt ; 
}

int main()
{
    char Arr[20] ;
    int iRet= 0;  
    
    printf("Enter String: \n") ; 
    scanf("%[^'\n']s",Arr) ; 

    iRet = UpperCaseR(Arr) ; 

    printf("Number of capital letters are : %d\n " ,iRet ); 

    return 0 ; 

}

// Number of Capital letters from string usiing Recursive Approach 
// Input : Arvind Motiram Kale 
// Output : 3 