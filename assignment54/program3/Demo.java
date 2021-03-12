// 3.Write a program which accept number from user and return the
// count of digits in between 3 and 7.
// Input : 2395
// Output : 1
// Input : 1018
// Output : 0
// Input : 4521
// Output : 2
// Input : 9922
// Output : 0 

import java.lang.*;
import java.util.*;
import java.io.*;


class Number
{
    int EvenCount(int  p)
    {
        int iDigit=0,iCnt=0;
        while(p!=0)
        {
            iDigit=p%10;
            if((iDigit>3) && (iDigit<7))
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

          int ret=obj.EvenCount(no);
          System.out.println("count of capital number is :"+ret);

         
    }  
    
}
