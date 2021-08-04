class SimpleArithmetic{
  
  public static void main(String[] args){
    double add, sub, mul, div, mod;
    int x = 100, y = 20;
    ArithmeticOperations ao = new ArithmeticOperations();
    add = ao.addThis(x, y);
    sub = ao.subThis(x, y);
    mul = ao.mulThis(x, y);
    div = ao.divThis(x, y);
    mod = ao.modThis(x, y);
    System.out.println("Output:");
    System.out.println("Add: " + add);
    System.out.println("Sub: " + sub);
    System.out.println("Mul: " + mul);
    System.out.println("Div: " + div);
    System.out.println("Mod: " + mod);
  }
}

class ArithmeticOperations{
  
  public double addThis(int a, int b){
    return a + b;
  }
  
  public double subThis(int a, int b){
    if(a > b)
      return a - b;
    else
      return b - a;
  }
  
  public double mulThis(int a, int b){
    return a * b;
  }
  
  public double divThis(int a, int b){
    if(b == 0)
      return 0.0;
    else
      return a / b;
  }
  
  public double modThis(int a, int b){
    return a % b;
  }
}