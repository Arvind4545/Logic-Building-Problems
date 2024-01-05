
//Accept String from user and Covert it into Lower 

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') &&  (*str<= 'Z'))
        {
            *str = *str + 32 ;
        }
        str++ ;
    }
}

int main()
{
    char Arr[20] ;

    printf("Please Enter the String\n") ;
    scanf("%[^'\n']s",Arr) ;

    strlwrX(Arr) ; //strlwrX(100) ;

    printf("String After conversion is :%s\n",Arr) ;

    return 0 ;
}