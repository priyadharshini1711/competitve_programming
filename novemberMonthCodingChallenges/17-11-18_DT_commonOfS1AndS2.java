/*
Given two strings s1 and s2 find the common count of words in s1 and s2
Input:
aa bb cc dd
dd cc
Output: 
2
Input: 
aaa bbb ccc dddd
dddd dddd cccc ccc aaa 
Output:
3
*/

import java.util.*;
public class HelloWorld{
     public static void main(String []args){
        Scanner sc= new Scanner(System.in);
        String s1=sc.nextLine();
        String s2=sc.nextLine();
        String a[]=s1.split("[ ]");
        String b[]=s2.split("[ ]");
        Set<String> l=new HashSet<String>();
        for(String c:a)
        l.add(c);
        Set<String> m=new HashSet<String>();
        for(String c:b)
        m.add(c);
        int ct=0;
        for(String c:l)
        {
            if(m.contains(c))
            ct++;
        }
        System.out.print(ct);
     }
}
