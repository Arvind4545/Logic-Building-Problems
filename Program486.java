import java.util.* ; 

class Program486
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter the String : ") ; 
        String str = sobj.nextLine() ; 

        String newstr = str.trim() ; // Eliminates leading and trailing spaces 

        String Arr[] = newstr.split(" ") ; 

        System.out.println("Number of Words are  : "+Arr.length) ; 
    }
}

// trim : used to remove whitespaces before and after the String 
