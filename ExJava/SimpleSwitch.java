import java.util.Scanner;

class SimpleSwitch{
  public static void main(String[] args){
    int x;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter choice:");
    x = sc.nextInt();
    sc.close();
    switch(x){
      case 1:
	System.out.println("You chose 1");
	break;
      case 2:
	System.out.println("You chose 2");
	break;
      case 3:
	System.out.println("You chose 3");
	break;
      default:
	System.out.println("Invalid choice");
	break;
    }
  }
}