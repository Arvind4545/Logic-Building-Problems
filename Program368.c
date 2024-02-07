#include<stdio.h>

void DisplayR(char *str)
{
    if(*str != '\0')
    {
        DisplayR(++str) ; 
        printf("%s\n",*str) ; 
    }
}

int main()
{
    char Arr[20] ;
    
    printf("Enter String: \n") ; 
    scanf("%[^'\n']s",Arr) ; 

    DisplayR(Arr) ; 

    return 0 ; 
}

// Head Recursion : Recursive Call is done before any Operation 