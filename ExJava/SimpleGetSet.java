import java.util.*;

class SimpleGetSet{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    double r = 0.0;
    double area = 0.0;
    System.out.println("Enter radius:");
    r = sc.nextDouble();
    GetSetMethod gsm = new GetSetMethod();
    gsm.setRadius(r);
    area = gsm.getArea();
    System.out.println("Area: " + area);
  }
}

class GetSetMethod{
  double x = 0.0;
  double pi = 3.14;
  double a = 0.0;
  public void setRadius(double x){
    this.x = x;
  }
  private void calcArea(){
    a = pi * x * x;
  }
  public double getArea(){
    calcArea();
    return a;
  }
}