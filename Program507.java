import java.util.* ; 

class Program507
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter String : ") ; 
        String str = sobj.nextLine() ; 

        String Arr[] = str.split(" ") ; 

        HashMap <String , Integer > hobj = new HashMap() ; 
        int Frequency = 0 ; 

        String Output = "" ; 

        for( String ch : Arr )
        {
            if(hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch) ; 
                hobj.put(ch , Frequency + 1 ) ; 
            }
            else 
            {
                hobj.put(ch , 1 ) ; 
                ch = ch+" " ; 
                Output = Output + ch ; 
            }
        }
        System.out.println(Output) ; 

    }
}