import java.util.*;
public class Hello {
    public static void main(String[] args) {
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int a[]=new int[n];
		int i,j;
		for(i=0;i<n;i++)
		a[i]=sc.nextInt();
		System.out.print("0"+" ");
		for(i=0;i<n-1;i++)
		{
		    int sum=0;
		    for(j=0;j<=i;j++)
		    {
		        sum=sum+a[j];
		    }
		    System.out.print(sum+" ");
		}
	}
}