// 4. Write a program which accept matrix and display addition of elements From each
// column.
// Input : 
// 3 2 5 9
// 4 3 2 2
// 8 4 1 9
// 3 9 7 5

// Output : 18 18 15 25 


import java.lang.*;
import java.util.*;


class Matrix
{
    void ColumnAddition(int p[][],int rows,int column)
    {
        int iSum=0,iSum1=0;
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<column;j++)
            {
                iSum=iSum+p[j][i];
            }
            
           System.out.print(iSum+"\t");
           iSum=0;
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
        obj.ColumnAddition(arr,rows,columns);

    }
}