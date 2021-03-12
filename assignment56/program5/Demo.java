
// 5. Write a java program which accept string from user and display
// it in reverse order.
// Input : “MarvellouS”
// Output : “SuollevraM” 

import java.lang.*;
import java.util.*;

class Reverse 
{
    void ReverseOrder(String p)
    {
        char arr[]=p.toCharArray();

        for(int i=0,j=arr.length-1;i<j;i++,j--)
        {
            char ch=arr[i];
            arr[i]=arr[j];
            arr[j]=ch;

        }
        System.out.println(arr);
    }
}
class Demo
{
    public static void main(String[] args) {
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string");
        String str=sobj.nextLine();

        Reverse obj=new Reverse();
        obj.ReverseOrder(str);
    }
}