
// 5. Write a recursive program which accept number from user and return its
// product of digits.
// Input : 523
// Output : 30 

#include<iostream>
using namespace std;

class Demo
{
    public:
        int ProductOfDigit(int);
};
int Demo::ProductOfDigit(int value)
{
    static int iDigit=0,product=1;
    if(value>0)
    {
        iDigit=value%10;
        product=product*iDigit;
        value=value/10;
       
        ProductOfDigit(value);
    }
    return product;
}
int main()
{
    int no=0,iRet=0;
    Demo obj;
    cout<<"enter number:\t";
    cin>>no;
    iRet=obj.ProductOfDigit(no);
    cout<<"Product of digits is "<<iRet;
    return 0;
}