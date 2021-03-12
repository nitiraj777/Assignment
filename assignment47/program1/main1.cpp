// 1. Write a recursive program which accept string from user and count white
// spaces.
// Input : HE llo WOr lD
// Output : 3 


#include<iostream>
using namespace std;

class Demo
{
    public:
        int CountOfWhitespace(char *);
};

int Demo::CountOfWhitespace(char *p)
{
    static int i=0;
    static int iCnt=0;
    if(p[i]!='\0')
    {
        //cout<<p[i];
        if(p[i]==' ')
        {
            iCnt++;
        }
        
        i++;
        CountOfWhitespace(p);
    }
    return iCnt;
}

int main()
{
    Demo obj;
    char ch[30]={'\0'};
    int iRet=0;
    printf("enter string:\t");
    scanf("%[^'\n']s",ch);
  

    //cout<<ch;
    iRet=obj.CountOfWhitespace(ch);
    cout<<"count of white space is "<<iRet;
    return 0;
}