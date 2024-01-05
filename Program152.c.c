
//Accept String from user and Covert it into Upper 

#include<stdio.h>

void strupprX(char *str)
{
    while(*str != '\0' )
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32 ;
        }
        str++ ;
    }
}

int main()
{
    char Arr[20] ;

    printf("Enter the string\n") ;
    scanf("%[^'\n']s",Arr) ;

    strupprX(Arr) ;

    printf("String is : %s\n",Arr) ;

    return 0 ;
}