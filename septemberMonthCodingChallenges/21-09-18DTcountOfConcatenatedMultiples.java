import java.util.Scanner;
public class Code 
{
    public static void main(String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        int n,x;
        n=sc.nextInt();
        x=sc.nextInt();
        int a[]= new int [n];
        int i;
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        int j;
        String s1;
        int s2=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                s1=Integer.toString(a[i]);
                s1=s1+Integer.toString(a[j]);
                int y=Integer.parseInt(s1);
                if(y%x==0)
                {
                    s2++;
                }
            }
        }
        for(i=n-1;i>=0;i--)
        {
            for(j=i-1;j>=0;j--)
            {
                s1=Integer.toString(a[i]);
                s1=s1+Integer.toString(a[j]);
                int y=Integer.parseInt(s1);
                if(y%x==0)
                s2++;
            }
        }
        System.out.print(s2);
}   
}
