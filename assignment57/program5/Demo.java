// 5. Write Java program which accept number of rows and number of columns
// from user and display below pattern.
// Input : iRow = 3 iCol = 4
// Output :
//  1 2 3 4
//  5 6 7 8
//  9 10 11 12 

import java.lang.*;
import java.util.*;

class DisplayPattern
{
    void Pattern(int rows,int col)
    {
       int no=1;
        int i=0,j=0;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<col;j++)
            {
                System.out.print("\t"+no);
                no++;
            }
            System.out.println();
        
        }
    }
}
class Demo
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number of rows");
        int row=sobj.nextInt();

        System.out.println("Enter number of column");
        int col=sobj.nextInt();

        DisplayPattern obj=new DisplayPattern();
        obj.Pattern(row,col);

    }
}