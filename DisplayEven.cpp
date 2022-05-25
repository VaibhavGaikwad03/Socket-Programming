#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;
    
    public:
        ArrayX(int iValue)
        {
            this->iSize = iValue;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }


        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the values of Array : "<<endl;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of Array are : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        void DisplayEven()
        {
            int iCnt = 0;

            cout<<"Even numbers are : "<<endl;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    cout<<Arr[iCnt]<<endl;
                }
            }
        }

};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of Elements : "<<endl;
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();
    obj.DisplayEven();

    return 0;
}