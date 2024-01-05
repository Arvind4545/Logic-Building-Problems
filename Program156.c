
// C Program to Copy Data of One String into another String 

#include<stdio.h>

void strcpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src ;
        
        src++ ; 
        dest++ ;
    }
    *dest = *src ; 
}

int main()
{
    char Arr[30] ;
    char Brr[30] ;

    printf("Enter the String\n") ;
    scanf("%[^'\n']s",Arr) ;

    strcpyX(Arr,Brr) ;   //strcpyX(100,200) ;

    printf("copied String would be : %s\n",Brr) ;

    return 0 ;
}