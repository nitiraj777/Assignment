// 1. Write application which accept file name from user and open that file in read mode.
// Input : Demo.txt
// Output : File opened successfully. 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void OpenFile(char *p)
{
    int fd=0;

    fd=open(p,O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the file");
    }
    else
    {
        printf("File get succefully opened %d",fd);
    }

    close(fd);
    
}
int main()
{
    char ch[50]={'\0'};

    printf("Enter file name to open\n");
    scanf("%s",&ch);

    OpenFile(ch);

    return 0;
}