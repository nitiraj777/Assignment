
// 5. Write a recursive program which accept number from user and return its
// reverse number.
// Input : 523
// Output : 325 

#include<iostream>
using namespace std;

class Demo
{
    public:
        int ReverseNumber(int);
};
int Demo::ReverseNumber(int value)
{
    static int iDigit=0,product=0;
    if(value>0)
    {
        iDigit=value%10;
        product=(product*10)+iDigit;
        value=value/10;
       
        ReverseNumber(value);
    }
    return product;
}
int main()
{
    int no=0,iRet=0;
    Demo obj;
    cout<<"enter number:\t";
    cin>>no;
    iRet=obj.ReverseNumber(no);
    cout<<"Product of digits is "<<iRet;
    return 0;
}