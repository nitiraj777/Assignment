// 1. Write a recursive program which accept number from user and display below
// pattern.
// Input : 5
// Output : 5 * 4 * 3 * 2 * 1 * 


#include<iostream>
using namespace std;

class Demo
{
    public:
        void Display(int);
};

void Demo::Display(int no)
{

    if(no>0)
    {
        printf("%d * ",no);
        no--;
        Display(no);
    }
}

int main()
{
    Demo obj;
    int value=0;
    cout<<"enter number:\t";
    cin>>value;

    obj.Display(value);
    return 0;
}