import java.util.*;
import java.math.*;
import java.*;

public class Main
{
	public static void main(String[] args)
	{
//		int sum = 0;
//		int i;
//		int temp = 0;
//		for (i = 0; i <= 10000; i++){
//			temp = 
//			while (temp % 5 == 0){
//				sum++;
//				temp /= 5;
//			}
//		}
//		System.out.println(sum);
		int line = 9;
		int i,j;
		int half;
		half = line / 2 + 1;
		for(i = 1; i <= line; i++){
			for(j = 0; j <= Math.abs(half - i);j++){
				System.out.print(" ");
			}
			for(j = 0;j <=Math.abs(Math.abs(half - i) - 4) * 2; j++){
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
		
