// 5.Write a recursive program which display below pattern.
// Output : a b c d e f 

#include<stdio.h>


void Display()
{
    static char ch='a';
    if(ch!='g')
    {
        printf("%c\t",ch);
        ch++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}