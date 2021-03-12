// 2. Write Java program which accept N numbers from user and display
// all such elements which are divisible by 5.
// Input : N : 6
//  Elements : 85 66 3 80 93 88
// Output : 85 80 

import java.lang.*;
import java.util.*;
import java.io.*;


class Number
{
    void Divisible(int  p[])
    {
        int isum=0,iSum1=0;
        for(int i=0;i<p.length;i++)
        {
            if((p[i]%5)==0)
            {
                System.out.println("\t"+p[i]);
            }

        }
        
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

          obj.Divisible(arr);
         
    }  
    
}
