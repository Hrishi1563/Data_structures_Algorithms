import java.util.*;
public class move
{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner (System.in);
        int n =sc.nextInt();
        int[] array=new int[n];
        int k=0;
        int temp;
        for (int i =0;i<n;i++)
        {
            array[i]=sc.nextInt();
        }
        for(int j=0;j<n;j++)
        {
            if(array[j]<0)
            {
                temp=array[j];
                array[j]=array[k];
                array[k]=temp;
                k++;
            }
            else
            continue;
            
        }
        for(int b:array)
        {
            System.out.print(b+" ");
        }
    }
}