public class B {
    public static void main(String[] args){
        B b1=new B();
        B b2 = new B();
        B b3 = new B();
        B b4 = new B();
        b1 = b3;
        b2 = b4;b3=null;
    }
}
class Employee{
    private  void display(){
        System.out.print("Employee");
    }
}