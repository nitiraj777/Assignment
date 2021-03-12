import java.util.Scanner;

// 3. Write a java program which accept string from user and return
// difference between frequency of small characters and frequency
// of capital characters. 
// Input : “MarvellouS”
// Output : 6 (8-2) 

class Difference
{
    int DifferenceBetween(String p)
    {
        int count1=0,count2=0;
        char arr[]=p.toCharArray();

        for(int i=0;i<arr.length;i++)
        {
            if((arr[i]>='A') && (arr[i]<='Z'))
            {
                count1++;
            }
            else if((arr[i]>='a') && (arr[i]<='z'))
            {
                count2++;
            }
        }
        return (count2-count1);
    }
}
class Demo
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter string");
        String str=sobj.nextLine();

        Difference obj=new Difference();
        int ret=obj.DifferenceBetween(str);
        System.out.println("Difference is: "+ret);
    }
}