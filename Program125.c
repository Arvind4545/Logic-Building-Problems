
#include<stdio.h>
#include<stdbool.h>

bool CheckCase(char ch)
{
    if((ch >= 'A')&&(ch<= 'Z')) ;
    {
        return true ; 
    }
    else 
    {
        return false ;
    }

}

int main() 
{
   char cValue = '\0' ;
   bool bRet = false ;

   printf("Enter one Character") ;
   scanf("%c",&cValue ) ;

   bRet = CheckSmall(cValue) ;

   if(bRet == true )
   {
        printf("%c is a UpperCase letter\n",cValue) ;
   }
   else
   {
        printf("%c is not a UpperCase number\n",cValue) ;
   }

   return 0 ; 
}