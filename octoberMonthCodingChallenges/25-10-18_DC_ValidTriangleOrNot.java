import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int a,b,c;
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		if(((a+b+c)==180)&&(a!=0&&b!=0&&c!=0))
		System.out.print("Valid triangle");
		else 
		System.out.print("Not a valid triangle");
		}
}
