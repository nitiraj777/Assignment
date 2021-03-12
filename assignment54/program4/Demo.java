// 4.Write a program which accept number from user and return
// multiplication of all digits.
// Input : 2395
// Output : 270
// Input : 1018
// Output : 8
// Input : 9440
// Output : 144
// Input : 922432
// Output : 864 

import java.lang.*;
import java.util.*;
import java.io.*;


class Number
{
    int Multiplication(int  p)
    {
        int iMult=1;
        int iDigit=0;
        while(p!=0)
        {
            iDigit=p%10;
            if(iDigit!=0)
            {
                iMult=iMult*iDigit;
            }
            
            
            p=p/10;
        }
        return iMult;
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

          int ret=obj.Multiplication(no);
          System.out.println("count of capital number is :"+ret);

         
    }  
    
}
