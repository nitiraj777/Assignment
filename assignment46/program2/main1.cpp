// 2. Write a recursive program which accept number from user and return
// summation of its digits.
// Input : 879
// Output : 24 

#include<iostream>
using namespace std;

class Demo
{
    public:
        int Display(int);
};

int Demo::Display(int value)
{
    static int iDigit=0,iSum=0;
    if(value!=0)
    {
        iDigit=value%10;
        iSum=iSum+iDigit;
        value=value/10;
        Display(value);
    }
    return iSum;
}

int main()
{
    Demo obj;
    int no=0,iRet=0;
    cout<<"enter number:\t";
    cin>>no;
    iRet=obj.Display(no);
    cout<<"Summation is:"<<iRet;
    return 0;
}