
//Problems on N Numbers 

#include<iostream>

using namespace std ; 

class ArrayX
{
    public : 
        int *Arr ; 
        int iSize ; 

        ArrayX(int i ) //Resource is memory outside the object 
        {
            iSize = i ; 
            Arr = new int[iSize] ; // Arr = (int * )malloc(Sizeof(int)*iSize) ; 
        }

        ~ArrayX()
        {
            delete []Arr ; 
        }

        void Accept() //Getter Method 
        {
            cout<<"Enter the Elements of Array : \n" ; 

            for(int iCnt = 0 ; iCnt < iSize ; iCnt++ )
            {
                cin>>Arr[iCnt];   //scanf("%d".&Arr[iCnt]) ; 
            }
        }

        void Display()  //Setter Method 
        {
            cout<<"Elements of Array are  : \n" ; 

            for(int iCnt = 0 ; iCnt < iSize ; iCnt++ )
            {
                cout<<Arr[iCnt]<<"\t" ;             
            }
        }

};

int main()
{
    ArrayX obj(5) ; //Static and hardcoded 
    

    obj.Accept() ; 
    obj.Display() ; 

    return 0 ; 
}