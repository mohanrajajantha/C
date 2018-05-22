

import java.util.*;
import java.lang.*;
import java.io.*;


class ReverseString
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String s,temp="";
		Scanner input=new Scanner(System.in);
		s=input.nextLine();
		String[] words=s.split(" ");
		for(String word:words)
		{
			StringBuilder x=new StringBuilder(word);
			x.reverse();
			temp=temp+x.toString()+" ";
		}
		System.out.println(temp);
	}
}
