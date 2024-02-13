
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
            cout<<"Allocating the Memory for Resources...."<<"\n" ; 
            iSize = i ; 
            Arr = new int[iSize] ; // Arr = (int * )malloc(Sizeof(int)*iSize) ; 
        }

        ~ArrayX()
        {
            cout<<"Deallocating the Memory of Resources.."<<"\n" ; 
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
    int iLength = 0 ; 

    cout<<"enter the Size of Array: "<<"\n" ; 
    cin>>iLength ; 

    ArrayX * obj = new ArrayX(iLength) ;  //dynamic 

    obj->Accept() ; 
    obj->Display() ; 

    delete obj ; 

    //Yachya khali 500 Lines cha code aahe 
    //ya code madhe obj ha pointer aahe auto storage class cha aahe 

    return 0 ; 
}