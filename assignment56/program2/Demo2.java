/*2. Write a java program which accept string from user and count
number of small characters.
Input : “Marvellous”
Output : 9 */
import java.lang.*;
import java.util.*;

class StringSmall
{
    int CountSmall(String p)
    {
        int Count=0;
        char arr[]=p.toCharArray();

        for(int i=0;i<arr.length;i++)
        {
            if((arr[i]>='a') && (arr[i]<='z'))
            {
                Count++;
            }
        }
        return Count;
    }
}
class Demo2
{
    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter string");
        String str=sobj.nextLine();

        StringSmall obj=new StringSmall();

        int ret=obj.CountSmall(str);
        System.out.println("Count of small character is: "+ret);
    }
}