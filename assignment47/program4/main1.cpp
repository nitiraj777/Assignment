// 4. Write a recursive program which accept number from user and return
// smallest digit
// Input : 87983
// Output : 3 

#include<iostream>
using namespace std;

class Demo
{
    public:
        int SmallestDigit(int);
};

int Demo::SmallestDigit(int value)
{
    static int iDigit=0,iMax=0;
    if(value!=0)
    {
        iDigit=value%10;
        if(iMax==0)
        {
            iMax=iDigit;
        }
        if(iMax>iDigit)
        {
            iMax=iDigit;
        }
        value=value/10;
        SmallestDigit(value);
    }
    return iMax;
}

int main()
{

    Demo obj;
    int no=0,iRet=0;;
    cout<<"Enter number\t";
    cin>>no;

    iRet=obj.SmallestDigit(no);
    cout<<"Factorial is "<<iRet;
    return 0;
}