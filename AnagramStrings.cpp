#include<iostream>

using namespace std; 

bool checkAnagram(char str[])
{
    char arr[50]; 

    while(*str!='\0')
    {
        if(arr[65-int(*str)] == char(*str) )
        {
            arr[65 - int(*str)]++; 
        }
        else 
        {
            arr[65-int(*str)] = 1 ; 
        }
        str++; 
    }

    
}

int main()
{
    return 0; 
}