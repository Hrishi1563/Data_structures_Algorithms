import java.util.*;
public class max_subarr
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n =sc.nextInt();
        int[] arr =new int[n];
        int sum=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
            if(arr[i]>0 && flag==0)
            {
                 flag=1;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(arr[j]>0)
            sum+=arr[j];
            else if(arr[j]<0 && j!=n-1 && arr[j+1]>0)
            sum+=arr[j];
            else if(flag==0)
            {
                Arrays.sort(arr);
                sum=arr[n-1];
            }
            else
            sum=0;
            
        }
        System.out.println(sum);
    }
}