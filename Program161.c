
//C Program to Reverse the string in Place 

#include<stdio.h>

void strrevX(char *str)
{
    char *start = str ; 
    char *end = str ; 
    char temp = '\0' ;

    while(*end != '\0')  //N 
    {
        end ++ ; 
    }
    end -- ;

    while(start < end )  //N/2 
    {
        temp = *start ;
        *start = *end ; 
        *end = temp ; 

        start++ ; 
        end-- ; 
    } 
}

int main()
{
    char Arr[20] ;

    printf("Enter String\n") ;
    scanf("%[^'\n']s",Arr) ;

    strrevX(Arr) ;

    printf("Reverse String is :%s\n",Arr) ;

    return 0 ;
}