// 1. Write Java program which accept N numbers from user and return
// difference between summation of even elements and summation of
// odd elements.
// Input : N : 6
//  Elements : 85 66 3 80 93 88
// Output : 53 (234 - 181) 

import java.lang.*;
import java.util.*;
import java.io.*;


class Number
{
    int Summation(int  p[])
    {
        int isum=0,iSum1=0;
        for(int i=0;i<p.length;i++)
        {
            if((p[i]%2)==0)
            {
                isum=isum+p[i];
            }
            else
            {
                iSum1=iSum1+p[i];
            }
        }
        return (isum-iSum1);
    }
}
class Demo
{

    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);
    
          System.out.println("enter number:");
          int n=sobj.nextInt();
          //String str=sobj.readLine();
        
          int arr[]=new int[n];
        System.out.println("enter element one by one");
          for(int i=0;i<arr.length;i++)
          {
              arr[i]=sobj.nextInt();
          }
        
          Number obj=new Number();

          int ret=obj.Summation(arr);
          System.out.println("count of capital number is :"+ret);

         
    }  
    
}
