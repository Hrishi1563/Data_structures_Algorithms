import java .util.*;
public class reverse 
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner (System.in);
        int n =sc.nextInt();
        int[] array= new int[n];
        
        
        for(int i=0;i<n;i++)
        {
            array[i]=sc.nextInt();
            
        }
        for(int j=0;j<(n/2);j++)
        {
            int temp =array[n-1-j];
            array[n-1-j]=array[j];
            array[j]=temp;
        }
        for(int i : array)
        {
            System.out.print(i);
        }
        
        
        
    }
}