import java.util.Scanner;

class SimpleForLoop{
  public static void main(String[] args){
    int x;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Limit: ");
    x = sc.nextInt();
    //Print Even Numbers
    System.out.println("Output:");
    for(int i = 1; i <= x; i++){
      if(i % 2 == 0)
	System.out.println(i);
    }
  }
}