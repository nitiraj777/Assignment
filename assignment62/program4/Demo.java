// 4. Write a program which accept matrix and check whether the matrix is
// identity matrix or not.
// Identity matrix is a square matrix with 1’s along the diagonal from upper left to
// lower right and 0’s in all other positions.
// If it satisfies the structure as explained before then the matrix is called as
// identity matrix. 
// Input : 
// 1 0 0 0
// 0 1 0 0
// 0 0 1 0
// 0 0 0 1

// Output : True 

import java.lang.*;
import java.util.*; 

class Matrix
{
    boolean IdentityMatrix(int arr[][],int rows,int columns)
    {
        
        int i=0,j=0,iCnt=0;
        boolean flag=true;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<columns;j++)
            {
               
                
                if((i==j) && (arr[i][j]==1))
                {
                    iCnt++;
                }
                else if((arr[i][j]>=1))
                {
                    flag=false;
                    break;
                }
                
            }
        }
       
        return flag;
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
        boolean ret=obj.IdentityMatrix(arr,rows,columns);
        if(ret==true)
        {
            System.out.println("Matrix is identity matrix");
        }
        else
        {
            System.out.println("Matrix is not identity matrix");
        }
    }
}