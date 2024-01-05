#include<stdio.h>

void strToggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32 ;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32 ;
        }
        else 
        {
            *str = *str ;
        }
        str++ ;
    }
    
}

int main()
{
    char Arr[30] ;

    printf("Enter the String\n") ;
    scanf("%[^'\n']s",Arr) ;

    strToggleX(Arr) ;
    
    printf("String After Toggling is : %s\n",Arr) ;

    return 0 ;
}