
#include<stdio.h>

// Length of String usiing Recursive Approach 

int StrlenR(char *str)
{
    static int iCnt =0 ; 

    if(*str != '\0')
    {
        iCnt++ ; 
        str++ ; 
        StrlenR(str) ; 
    }
    return iCnt ; 
}

int main()
{
    char Arr[20] ;
    int iRet= 0;  
    
    printf("Enter String: \n") ; 
    scanf("%[^'\n']s",Arr) ; 

    iRet = StrlenR(Arr) ; 

    printf("String Lenght is : %d\n",iRet) ; 

    return 0 ; 

}