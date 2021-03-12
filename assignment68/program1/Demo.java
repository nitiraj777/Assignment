// 1. Write java program which accept array from user and reverse each
// number of that array.
// Input : 89 687 56 549 87 9
// Output : 98 786 65 945 78 9

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    void ReverseArrayNumber(int arr[])
    {
        int iDigit=0,iSum=0;
        int no=0,i=0;
        for(i=0;i<arr.length;i++)
        {
            no=arr[i];
            iSum=0;
            while(no!=0)
            {
                iDigit=no%10;
                iSum=(iSum*10)+iDigit;
                no=no/10;
            }
            arr[i]=iSum;
        }
       System.out.println("elements of array are");

       for(i=0;i<arr.length;i++)
       {
           System.out.print(arr[i]+"\t");
       }
    }
}
class Demo
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter size of first array");
        int Size=sobj.nextInt();

        int arr[]=new int[Size];

        System.out.println("enter elements one by one for first array");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sobj.nextInt();
        }

        ArrayDemo obj=new ArrayDemo();

        obj.ReverseArrayNumber(arr);
       
    }
}