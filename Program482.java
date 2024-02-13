import java.util.* ; 

class Program482
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter the String : ") ; 
        String str = sobj.nextLine() ; 

        char Arr[] = str.toCharArray() ; 

        for(int i = 0 ; i < Arr.length ; i++ )
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                Arr[i] = (char)(Arr[i] + 32) ; 
            }
        }

        String output = new String(Arr) ; 

        System.out.println(output) ; 
    }
}

