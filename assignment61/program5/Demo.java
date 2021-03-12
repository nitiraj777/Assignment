// 5. Write a program which accept matrix and swap the contents of consecutive rows.
// Input : 
// 3 2 5 9
// 4 3 2 2
// 8 4 1 9
// 3 9 7 5

// Output : 

// 4 3 2 2
// 3 2 5 9
// 3 9 7 5
// 8 4 1 9


import java.lang.*;
import java.util.*;


class Matrix
{
    void SwapContentOfConsecutiveRows(int p[][],int rows,int columns)
    {
        int iSum=0;
        int arr;
        
        for(int i=0;i<rows;i++)
        {
            for(int j=1;j<=columns;j++)
            {
                arr=p[i][j];
                p[i][j]=p[j][i];
                p[j][i]=arr;
            }
        }
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
        obj.SwapContentOfConsecutiveRows(arr,rows,columns);
        

    }
}