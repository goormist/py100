import java.util.Scanner;

class example5_3 {
	public static void main(String args[]) {
		int i = 0;
		
		double sum = 0;
		
		Scanner scan = new Scanner(System.in);
		
		while(i++ < 5) {
			double n = scan.nextDouble();
			sum += n;
		}

		System.out.printf("%.3f\n", sum);
	}	
}
