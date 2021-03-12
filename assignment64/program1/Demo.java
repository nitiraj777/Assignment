// 1. Write Java program which accept String from user and display
// below pattern.
// Input : Hello
// Output :
//  H * * * *
//  H e * * *
//  H e l * *
//  H e l l * 


import java.lang.*;
import java.util.*;

class StringMatrix
{
    void DisplayPattern(String str)
    {
        char arr[]=str.toCharArray();

        for(int i=0;i<arr.length-1;i++)
        {
            for(int j=0;j<=i;j++)
            {
                System.out.print(arr[j]+"\t");
               
            }
            for(int k=1;k<arr.length-i;k++)
            {
                System.out.print("*\t");
            }
            System.out.println();         
        }
    }
}
class Demo
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter String");
        String str=sobj.nextLine();

        StringMatrix obj=new StringMatrix();

        obj.DisplayPattern(str);
    }
}