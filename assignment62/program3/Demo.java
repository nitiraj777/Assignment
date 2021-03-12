
// 3. Write a program which accept matrix and reverse the contents of each
// column.
// Input : 
// 3 2 5 9
// 4 3 2 2
// 8 4 1 9
// 3 9 7 5

// Output : 
// 3 9 7 5
// 8 4 1 9
// 4 3 2 2
// 3 2 5 9

import java.lang.*;
import java.util.*; 

class Matrix
{
    void ReverseColumn(int arr[][],int rows,int columns)
    {
        
        int i=0,j=0,k=0;
        for(i=0;i<rows;i++)
        {
            for(j=0,k=columns-1;j<k;j++,k--)
            {
                int s=arr[j][i];
                arr[j][i]=arr[k][i];
                arr[k][i]=s;
            }
        }
        for(int x=0;x<rows;x++)
        {
            for(int y=0;y<columns;y++)
            {
                System.out.print(arr[x][y]+"\t");
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
        obj.ReverseColumn(arr,rows,columns);
    }
}