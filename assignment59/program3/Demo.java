// 3. Write Java program which accept String from user and display
// below pattern.
// Input : Hello
// Output :
//  H
//  H e
//  H e l
//  H e l l
//  H e l l o 

import java.lang.*;
import java.util.*;

class DisplayPattern
{
    void Pattern(String p)
    {
        int i=0,j=0;
       char arr[]=p.toCharArray();
       for(j=0;j<arr.length;j++)
       {
            for(i=0;i<=j;i++)
            {
                System.out.print(arr[i]+"\t");
            }
            System.out.println();
       }
      
    }
}
class Demo
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter string ");
        String str=sobj.nextLine();
    
        DisplayPattern obj=new DisplayPattern();
        obj.Pattern(str);

    }
}