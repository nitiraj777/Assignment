// 1.Write a program which accept matrix from user and return addition of diagonal
// elements.
// Input :
// 3 2 5 9
// 4 3 2 2
// 8 4 1 5
// 3 9 7 5
// Output : 12 


import java.lang.*;
import java.util.*;


class Matrix
{
    int DiagonalAddition(int p[][])
    {
        int iSum=0;
        
        for(int i=0;i<p.length;i++)
        {
            for(int j=0;j<p[i].length;j++)
            {
                if(i==j)
                {
                    iSum=iSum+p[i][j];
                }
            }
        }
        return iSum;
    }
}
class Demo
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter rows");
        int rows=sobj.nextInt();

        System.out.println("Enter columns");
        int columns=sobj.nextInt();

        int arr[][]=new int[rows][columns];
        System.out.println("enter elements one by one");

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                arr[i][j]=sobj.nextInt();
            }
        }

        Matrix obj=new Matrix();
        int ret=obj.DiagonalAddition(arr);
        System.out.println("Addition of diagonal elements is:"+ret);

    }
}