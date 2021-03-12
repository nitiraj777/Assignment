// 2. Write application which accept file name from user and create that file.
// Input : Demo.txt
// Output : File created successfully. 


#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

class Demo
{
    public:
        void CreateFile(char *);
};

void Demo::CreateFile(char *p)
{
    int fd=0;

    fd=open(p,O_RDWR | O_CREAT,0777);
    if(fd==-1)
    {
        cout<<"Unable to create file\n";
    }
    else
    {
        cout<<"successfully created "<<fd;
    }

    close(fd);
    
   
}

int main()
{
    Demo obj;
    char ch[30]={'\0'};

    cout<<"enter file name to create\n";
    cin>>ch;

    obj.CreateFile(ch);
    return 0;
}