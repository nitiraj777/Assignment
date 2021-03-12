
#include<iostream>
using namespace std;

class Demo
{
    public:
        void Display(int);
};

void Demo::Display(int value)
{
    static char ch='A';
    if(value>0)
    {
        cout<<ch<<"\t";
        ch++;
        value--;
        Display(value);
    }
}

int main()
{

    Demo obj;
    int no=0;
    cout<<"Enter number\t";
    cin>>no;

    obj.Display(no);
    return 0;
}