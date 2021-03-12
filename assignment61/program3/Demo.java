// 3. Write a program which accept matrix and return largest number from both the
// diagonals
// Input :
// 3 2 5 9    11 12 13 14
// 4 3 2 2    21 22 23 24
// 8 4 1 9    31 32 33 34
// 3 9 7 5    41 42 43 44
// Output : 9 


import java.lang.*;
import java.util.*;


class Matrix
{
    int LargestNumberOfDiagonal(int p[][],int rows,int columns)
    {
        int iMax=0;
        int iMax2=0;
        int i=0;
        
        iMax=p[0][0];
        iMax2=p[0][columns-1];
        for( i=0;i<p.length;i++)
        {
            for(int j=0;j<p.length;j++)
            {
               if((i==j) && (iMax<p[i][j]))
                {
                    iMax=p[i][j];
                }
                if((((i+j)==rows) && (iMax2<p[i][j])))
                {
                    iMax2=p[i][j];
                }
            }
        }
        //iMax2=p[0][columns-1];
        // for(i=0;i<p.length;i++)
        // {
        //     for(int j=0;j<p.length;j++)
        //     {
        //         if((((i+j)==rows) && (iMax2<p[i][j])))
        //         {
        //             iMax2=p[i][j];
        //         }
        //     }
        // }
        // System.out.println("iMax "+iMax);
        // System.out.println("iMax2 "+iMax2);
        // return iMax2;
        if(iMax>iMax2)
        {
            return iMax;
        }
        else
        {
            return iMax2;
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
        int ret=obj.LargestNumberOfDiagonal(arr,rows,columns);
        System.out.println("Largest number of diagonal elements is:"+ret);

    }
}