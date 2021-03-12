// 3. Write a recursive program which accept string from user and count number
// of small characters.
// Input : HElloWOrlD
// Output : 5 

#include<iostream>
using namespace std;


class Demo
{
    public:
        int Count(char *);
};

int Demo::Count(char *p)
{
    static int i=0;
    static int iCnt=0;
    if(p[i]!='\0')
    {
        if((p[i]>='a') && (p[i]<='z'))
        {
            iCnt++;
        }
        i++;
        Count(p);
    }
    return iCnt;
}

int main()
{
    Demo obj;
    int iRet=0;
    char ch[30]={'\0'};
    cout<<"enter number:\t";
    cin>>ch;
    iRet=obj.Count(ch);
    cout<<"Count of words is "<<iRet;
    return 0;
}