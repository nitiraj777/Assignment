import java.lang.*;
import java.util.*;
import java.io.*;


class StringDemo
{
    int CountCapital(String  p)
    {
        char arr[]=p.toCharArray();
        int CountCapital=0;
        for(int i=0;i<arr.length;i++)
        {
            if((arr[i]>='A') && (arr[i]<='Z'))
            {
                CountCapital++;
            }
        }
        return CountCapital;
    }
}
class Demo1
{

    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);
        // BufferedReader sobj= new BufferedReader(new InputStreamReader(System.in));
          System.out.println("enter string:");
          String str=sobj.nextLine();
          //String str=sobj.readLine();
        
         
          StringDemo obj=new StringDemo();

          int ret=obj.CountCapital(str);
          System.out.println("count of capital number is :"+ret);


    }  
    
}