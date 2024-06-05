
#include<iostream>

using namespace std; 

bool checkPalindrone(char *str)
{
    char *end = NULL; 
    char *start = NULL; 
    start = str; 
    end = str; 
    bool bFlag = true; 

    while(*end != '\0')
    {
        end++; 
    }
    end--; 


    while(start < end )
    {
        if(*start != *end)
        {
            
            bFlag = false; 
            break; 
        }
        start++; 
        end--; 
    }

    return bFlag ; 
}
int main()
{
    char str[50]; 

    cout<<"Enter a String:"; 
    cin>>str;

    bool bRet = checkPalindrone(str); 

    if(bRet == true)
    {
        cout<<"String is a Palindrone"; 
    }
    else 
    {
        cout<<"String is not a Palindrone"; 
    }
    return 0; 
}