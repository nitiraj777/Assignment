// 5. /Write a program which accept matrix and check whether the matrix is
// Sparse matrix or not.
// Sparse matrix is a matrix with the majority of its elements equal to zero.
// Input : 
// 1 0 3 0
// 0 6 0 0
// 0 0 1 0
// 9 0 0 9

// Output : True

import java.lang.*;
import java.util.*; 

class Matrix
{
    boolean SparseMatrix(int arr[][],int rows,int columns)
    {
       
        int i=0,j=0;
        int iCnt=0,iCnt1=0;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<columns;j++)
            {
                if(arr[i][j]==0)
                {
                    iCnt++;
                }
                else
                {
                    iCnt1++;
                }
            }
        }
        if(iCnt>iCnt1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
}
class Demo
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter number of rows");
        int rows=sobj.nextInt();

        System.out.println("enter number of rows");
        int columns=sobj.nextInt();

        int arr[][]=new int[rows][columns];

        System.out.println("enter elements one by one");

        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr.length;j++)
            {
                arr[i][j]=sobj.nextInt();
            }
        }

        Matrix obj=new Matrix();
        boolean ret=obj.SparseMatrix(arr,rows,columns);
        if(ret==true)
        {
            System.out.println("Given matrix is Sparse");
        }
        else
        {
            System.out.println("Given matrix is not Sparse");
        }
    }
}