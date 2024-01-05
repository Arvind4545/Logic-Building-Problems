
// C Program to Copy Data of One String into another String in Capital Case 

#include<stdio.h>

void strcpyCapX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a')&&(*src <= 'z'))
        {
            *dest = *src - 32 ; 
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

    strcpyCapX(Arr,Brr) ;   //strcpyX(100,200) ;

    printf("copied String would be : %s\n",Brr) ;
    printf("Original String is : %s\n",Arr) ;

    return 0 ;
}