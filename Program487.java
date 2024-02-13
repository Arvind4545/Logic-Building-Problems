import java.util.* ; 

class Program487
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter the String : ") ; 
        String str = sobj.nextLine() ; 

        String data = str.replaceAll("\\s+"," ") ; // + Indicates More than One , 2nd argument indicates replace by whitespace 

        String newstr = data.trim() ; 

        String Arr[] = newstr.split(" ") ; 

        System.out.println("Number of Words are  : "+Arr.length) ; 
    }
}

// trim : used to remove whitespaces before and after the String 
// //s : indicates one or more whitespace characters 
// +  indicates one or more occurrence of precedding pattern 