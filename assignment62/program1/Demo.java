// 1.Write a program which accept matrix from user and display transpose of the
// matrix.
// The transpose of a given matrix is formed by interchanging the rows and
// columns of a matrix

// Input : 
// 3 2 5 9
// 4 3 2 2
// 8 4 1 5
// 3 9 7 5

// Output : 
// 3 4 8 3
// 2 3 4 9
// 5 2 1 7
// 9 2 5 5

import java.lang.*;
import java.util.*; 

class Matrix
{
    void InterchangingMatrix(int arr[][],int rows,int columns)
    {
        int brr[][]=new int[rows][columns];
        int i=0,j=0;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<columns;j++)
            {
                brr[i][j]=arr[j][i];
            }
        }
        for(int x=0;x<rows;x++)
        {
            for(int y=0;y<columns;y++)
            {
                System.out.print(brr[x][y]+"\t");
            }
            System.out.println();
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
        obj.InterchangingMatrix(arr,rows,columns);
    }
}