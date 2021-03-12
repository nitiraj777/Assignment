// 2. Write a program which accept matrix and one number from user and return
// frequency of that number.
// Input :
// Number : 9
// 3 2 5 9
// 4 3 2 2
// 8 4 1 9
// 3 9 7 5
// Output : 3 


import java.lang.*;
import java.util.*;


class Matrix
{
    int FrequencyNumber(int p[][],int rows,int columns,int value)
    {
        int iCnt=0;
        
        if((rows!=columns) || (rows==0) || (columns==0))
        {
            return -1;
        }
        for(int i=0;i<p.length;i++)
        {
            for(int j=0;j<p[i].length;j++)
            {
                if(p[i][j]==value)
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
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

        System.out.println("Enter number to find the frequency ");
        int value=sobj.nextInt();

        Matrix obj=new Matrix();
        int ret=obj.FrequencyNumber(arr,rows,columns,value);
        System.out.println("Frequency of that number is:"+ret);

    }
}