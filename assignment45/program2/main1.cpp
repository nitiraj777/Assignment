

#include<iostream>
using namespace std;

class Demo
{
    public:
        void Display(int);
};

void Demo::Display(int value)
{
    static int i=1;
    if(i<=5)
    {
        cout<<i<<"\t";
        i++;
        Display(value);
    }
}

int main()
{
    Demo obj;
    int no=0;
    cout<<"enter number:\t";
    cin>>no;
    obj.Display(no);
    return 0;
}