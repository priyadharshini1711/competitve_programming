import java.util.*;
public class Hello {
    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		String a[]=s.split(" ");
		int i,j;
		for(i=0;i<a.length;i++)
		{
		    for(j=0;j<a.length;j++)
		    {
		        if(i!=j&&(Character.toLowerCase(a[i].charAt(0))==Character.toLowerCase(a[j].charAt(0))))
		        {
		            a[i]=a[i]+a[j];
		            a[j]="\0";
		        }
		    }
		}
		Set<String> l= new HashSet<String>();
		for(String t:a)
		{
		    if(t!=null)
		    l.add(t);
		}
		for(String t:l)
		System.out.println(t);
	}
}
