#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        printf("%s\n",str);
        str++;
        Display(str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}

// Tail Recursion : Recursive Call is there at the end of the function 
// Tail here indicates that Recursive call is there at the end of the function 

// Accept String from user and display below Pattern
// Input String : String 
// Ouput : 
// String 
// tring 
// ring 
// ing 
// ng
// g 
