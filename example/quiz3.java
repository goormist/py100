import java.util.Scanner;

class quiz3 {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		double[] number = new double[5];
		for(int i=0; i<5; i++)
			number[i] = scan.nextDouble();
		
		double min_num = number[0];
		for(int i=0; i<5; i++) {
			if (min_num > number[i])
				min_num = number[i];
		}
		System.out.println(min_num);
	}	
}
