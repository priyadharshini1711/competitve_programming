import java.util.*;
public class Hello {
    public static void main(String[] args) {
		String s;
		Scanner sc=new Scanner(System.in);
		s=sc.nextLine();
		String s1[]=s.split(" ");
		int k=0;
		for(int i=s1.length-1;i>=0&&k<s1.length;i--,k++)
		{
		    if(k%2!=0)
		    {
		        for(int j=s1[i].length()-1;j>=0;j--)
		        System.out.print(s1[i].charAt(j));
		        System.out.print(" ");
		    }
		    else 
		    System.out.print(s1[i]+" ");
		}
	}
}
