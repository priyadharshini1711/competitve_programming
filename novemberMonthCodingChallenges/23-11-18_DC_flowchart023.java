import java.util.*;
public class Hello {
    public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		String s1=sc.next();
		String s2=sc.next();
		char a[]=s1.toCharArray();
		char b[]=s2.toCharArray();
		int i,f=0;
		for(i=2;i<a.length;i++)
		{
		    if(a[i]!=b[i-2])
		    {
		        f=1;
		        break;
		    }
		}
		if(f==0)
		{
		    if(a[0]==b[b.length-2]&&a[1]==b[b.length-1])
		    System.out.print("Yes");
		    else 
		    System.out.print("No");
		}
		else 
		{
		    System.out.print("No");
		}
	}
}