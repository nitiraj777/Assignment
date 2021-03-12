
#include<iostream>
using namespace std;

class Demo
{
    public:
        void Display(int);
};
void Demo::Display(int value)
{
    static char ch='a';
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
    int no=0;
    Demo obj;
    cout<<"enter number:\t";
    cin>>no;
    obj.Display(no);
    return 0;
}