// 4. Write a recursive program which accept number from user and return its
// factorial.
// Input : 5

// Output : 120 

#include<iostream>
using namespace std;

class Demo
{
    public:
        int Factorial(int);
};

int Demo::Factorial(int value)
{
    static int iMult=1;
    if(value>0)
    {
        iMult=iMult*value;
        value--;
        Factorial(value);
    }
    return iMult;
}

int main()
{

    Demo obj;
    int no=0,iRet=0;;
    cout<<"Enter number\t";
    cin>>no;

    iRet=obj.Factorial(no);
    cout<<"Factorial is "<<iRet;
    return 0;
}