// 4. Accept one character from user and convert case of that character.
// Input : a Output : A
// Input : D Output : d 

#include<stdio.h>
char DisplayConvert (char CValue)
{
 if(CValue<90)
 {
    char iAns;
    iAns=CValue + 32;
    return iAns;
 }
 else
 {
 char iAns;
 iAns=CValue - 32;
  return iAns;
 }

}
int main()
{
 char cValue = '\0';
 char ch;

 printf("Enter character\n");
 scanf("%c",&cValue);
 ch=DisplayConvert(cValue);
 printf("%c",ch);
 return 0;
} 