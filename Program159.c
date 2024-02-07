
// C Program to Copy Data of One String into another String in LOWER Case  

#include<stdio.h>

void strcpylwrX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
            *dest = *src + 32 ; 
        }       
        else
        {
            *dest = *src ; 
        }
        
        src++ ; 
        dest++ ;
    }

    *dest = '\0' ; 
}

int main()
{
    char Arr[30] ;
    char Brr[30] ;

    printf("Enter the String\n") ;
    scanf("%[^'\n']s",Arr) ;

    strcpylwrX(Arr,Brr) ;   //strcpyX(100,200) ;

    printf("copied String would be : %s\n",Brr) ;

    return 0 ;
}