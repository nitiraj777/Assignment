// 4. Write a java program which accept string from user and check
// whether it contains vowels in it or not.
// Input : “marvellous”
// Output : TRUE
// Input : “Demo”
// Output : TRUE
// Input : “xyz”
// Output : FALSE 

import java.lang.*;
import java.util.*;

class Vowels
{
    boolean ContainVolwels(String p)
    {
        char arr[]=p.toCharArray();
        int i=0;
        for(i=0;i<arr.length;i++)
        {
            if((arr[i]=='a')|| (arr[i]=='e') || (arr[i]=='i') || (arr[i]=='o') || (arr[i]=='u') || (arr[i]=='A') || (arr[i]=='E') || (arr[i]=='I') || (arr[i]=='O') || (arr[i]=='U'))
            {
                break;
            }
            
        }
        if((arr[i]=='a')|| (arr[i]=='e') || (arr[i]=='i') || (arr[i]=='o') || (arr[i]=='u') || (arr[i]=='A') || (arr[i]=='E') || (arr[i]=='I') || (arr[i]=='O') || (arr[i]=='U'))
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

        System.out.println("enter string");
        String str=sobj.nextLine();

        Vowels obj=new Vowels();
        boolean ret=obj.ContainVolwels(str);
        if(ret==true)
        {
            System.out.println("String contain Volwels");
        }
        else
        {
            System.out.println("String not contain Volwels");
        }
    }
}