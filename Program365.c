#include<stdio.h>

int LowerCaseR(char *str)
{
    static int iCnt =0 ; 

    if(*str != '\0')
    {
        if(*str <= 'z' && *str >= 'a')
        {
            iCnt++ ; 
        }
        str++ ; 
        LowerCaseR(str) ; 
    }
    return iCnt ; 
}

int main()
{
    char Arr[20] ;
    int iRet= 0;  
    
    printf("Enter String: \n") ; 
    scanf("%[^'\n']s",Arr) ; 

    iRet = LowerCaseR(Arr) ; 

    printf("Number of LowerCase letters are : %d\n " ,iRet ); 

    return 0 ; 

}

// Number of LowerCase letters from string usiing Recursive Approach 
