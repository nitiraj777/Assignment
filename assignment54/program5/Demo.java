// 5.Write a program which accept number from user and return
// difference between summation of even digits and summation of odd
// digits.
// Input : 2395
// Output : -15 (2 - 17)
// Input : 1018
// Output : 6 (8 - 2)
// Input : 8440
// Output : 16 (16 - 0)
// Input : 5733
// Output : -18 (0 - 18)

import java.lang.*;
import java.util.*;
import java.io.*;


class Number
{
    int Difference(int  p)
    {
        int iDigit=0,iCnt=0;
        int iSum1=0,iSum=0;
        while(p!=0)
        {
            iDigit=p%10;
            if((iDigit%2)==0)
            {
                iSum=iSum+iDigit;
            }
            else
            {
                iSum1=iSum1+iDigit;
            }
            p=p/10;
        }
        return iSum-iSum1;
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

          int ret=obj.Difference(no);
          System.out.println("count of capital number is :"+ret);

         
    }  
    
}
