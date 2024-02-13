
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
            Arr = new int[iSize] ; 
        }

        ~ArrayX()
        {
            cout<<"Deallocating the Memory of Resources.."<<"\n" ; 
            delete []Arr ; 
        }

        void Accept() 
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
            cout<<"\n" ; 
        }

};

class MarvellousLB : public ArrayX 
{
    public :
        MarvellousLB(int i):ArrayX(i)
        {

        }
        void Funtion_Name()
        {
            //Logic 
        }
};

int main()
{
    int iLength = 0 ; 
    int iRet = 0 ; 

    cout<<"enter the Size of Array: "<<"\n" ; 
    cin>>iLength ; 

    MarvellousLB *obj = new MarvellousLB(iLength) ; 

    obj->Accept() ; 
    obj->Display() ; 

    iRet = obj -> Minimum() ; 

    cout<<"Smallest Element is : "<<iRet<<"\n" ; 

    delete obj ; 

    return 0 ; 
}