#include<stdio.h>

// Number of LowerCase letters from string usiing Recursive Approach 

void Display(char *str)
{

    if(*str != '\0')
    {
        printf("%c\n",*str) ; 
        str++ ; 
        Display(str) ; 
    }
}

int main()
{
    char Arr[20] ;
    int iRet= 0;  
    
    printf("Enter String: \n") ; 
    scanf("%[^'\n']s",Arr) ; 

    DisplayR(Arr) ; 

    return 0 ; 

}