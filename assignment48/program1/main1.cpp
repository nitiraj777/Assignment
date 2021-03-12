// 1. Write application which accept file name from user and open that file in read mode.
// Input : Demo.txt
// Output : File opened successfully. 

#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

class Demo
{
    public:
        void OpenFile(char *);
};

void Demo::OpenFile(char *p)
{
    int fd=0;

    fd=open(p,O_RDONLY);
    if(fd==-1)
    {
        cout<<"unable to open\n";
    }
    else
    {
        cout<<"file get succefully opened "<<fd;
    }
    close(fd);
    
}
int main()
{
    Demo obj;
    char ch[50]={'\0'};

    cout<<"Enter File name\n";
    cin>>ch;



    obj.OpenFile(ch);

    return 0;

}
