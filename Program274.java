
// Problems on String 
// Accepting String from user and Display the String 

import java.util.* ; 

class Program274
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Please Enter String") ; 
        String  str = sobj.nextLine() ; 

        char Arr[] = str.toCharArray() ; 

        System.out.println("Data is : "+Arr) ; 
    }
}