
//Accept string from user and Calculate the occurrences of the letter 'a' 

#include<stdio.h>

int CountCh(char *str)
{
    int iCnt = 0 ;

    while(*str != '\0')
    {
        if((*str == 'a')||(*str == 'A'))
        {
            iCnt++ ;
        }
        str++ ;
    }
    
    return iCnt ; 
}

int main()
{
    char Arr[10] ;
    int iRet = 0 ;

    printf("Enter String\n") ;
    scanf("%[^'\n']s",Arr) ;

    iRet = CountCh(Arr);

    printf("Number of Occurrences of a is : %d\n",iRet ) ;

    return 0;

}

