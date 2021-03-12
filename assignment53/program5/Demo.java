// 5. Write Java program which accept N numbers from user and display
// all such elements which are multiples of 11.
// Input : N : 6
//  Elements : 85 66 3 55 93 88
// Output : 66 55 88  


import java.lang.*;
import java.util.*;
import java.io.*;


class Number
{
    void Multiple(int  p[])
    {

        for(int i=0;i<p.length;i++)
        {
            if((p[i]%11)==0)
            {
                System.out.print("\t"+p[i]);
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

          obj.Multiple(arr);
    }  
    
}
