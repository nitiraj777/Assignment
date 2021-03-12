// 3. Write Java program which accept array of characters from user and
// accept one character. Return occurrence of that character without
// considering case.
// Input : b N e B R b A i G i B
//  b
// Output : 4 

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    
    int Search(char arr[],char ch)
    {
        int i=0;
        for(i=0;i<arr.length;i++)
        {
            if((arr[i]==ch) || (arr[i]==((char)ch+32)))
            {
                break;
            }
        }
        if((arr[i]==ch) || (arr[i]==((char)ch+32)))
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}
class Demo
{
    public static void main(String[] args) //throws Exception
     {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter size of character array");
        int Size=sobj.nextInt();

        char arr[]=new char[Size];
        System.out.println("enter character ");

        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sobj.next().charAt(0);
        }

        System.out.println("enter size of character array");
        char ch=sobj.next().charAt(0);
        ArrayDemo obj=new ArrayDemo();
        int ret=obj.Search(arr,ch);
        System.out.println("Count of capital letter is "+ret);
        
    }
}