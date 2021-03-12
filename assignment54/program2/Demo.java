// 2.Write a program which accept number from user and return the
// count of odd digits.
// Input : 2395
// Output : 3
// Input : 1018
// Output : 2
// Input : -1018
// Output : 2
// Input : 8462
// Output : 0 

import java.lang.*;
import java.util.*;
import java.io.*;


class Number
{
    int OddDigit(int  p)
    {
        int iDigit=0,iCnt=0;
        while(p!=0)
        {
            iDigit=p%10;
            if((iDigit%2)!=0)
            {
                iCnt++;
            }
            p=p/10;
        }
        return iCnt;
    }
}
class Demo
{

    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);
    
          System.out.println("enter number:");
          int no=sobj.nextInt();
        
          Number obj=new Number();

          int ret=obj.OddDigit(no);
          System.out.println("count of capital number is :"+ret);

         
    }  
    
}
