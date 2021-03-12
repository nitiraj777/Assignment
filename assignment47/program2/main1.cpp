// 2. Write a recursive program which accept number from user and return
// largest digit
// Input : 87983
// Output : 9 

#include<iostream>
using namespace std;

class Demo
{
    public:
        int LargestDigit(int);
};

int Demo::LargestDigit(int value)
{
    static int iDigit=0,iMax=0;
    if(value!=0)
    {
        iDigit=value%10;
        if(iMax==0)
        {
            iMax=iDigit;
        }
        if(iMax<iDigit)
        {
            iMax=iDigit;
        }
        value=value/10;
        LargestDigit(value);
    }
    return iMax;
}

int main()
{
    Demo obj;
    int no=0,iRet=0;
    cout<<"enter number:\t";
    cin>>no;
    iRet=obj.LargestDigit(no);
    cout<<"Largest Digit is:"<<iRet;
    return 0;
}