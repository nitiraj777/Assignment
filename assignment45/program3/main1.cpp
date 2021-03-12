// 3.Write a recursive program which display below pattern.
// Input : 5
// Output : 5 4 3 2 1 

#include<iostream>
using namespace std;


class Demo
{
    public:
        void Display(int);
};

void Demo::Display(int value)
{
    if(value>0)
    {
        cout<<value<<"\t";
        value--;
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