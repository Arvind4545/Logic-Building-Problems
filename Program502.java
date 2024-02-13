import java.util.* ; 

class Program502 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter String : "); 
        String str = sobj.nextLine() ; 

        char Arr[] = str.toCharArray() ; 

        HashMap <Character , Integer > hobj = new HashMap() ; 
        int Frequency = 0 ; 

        for(char ch : Arr )
        {
            if(hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch) ;
                hobj.put(ch , Frequency + 1 ) ; 
            }
            else 
            {
                hobj.put(ch , 1 ) ; 
            }
        }
        System.out.println(hobj) ; 
    }
}

// Accept String from user and display occurrence of each letter. 
// Arvind Kale 
// A : 1 , r = 1 , v = 1 , i = 1, n = 1 , d = 1 , K = 1 , a = 1 , l = 1 , e = 1 