import pack.test;
class test2 extends test
 {
 
  int c;
  test2(int a)
  {
   c=a;
  }
   void display(test ob)
   { 
   System.out.println("the sum of "+ob.x+" and "+c+" is ");
   int d=ob.x+c;
    System.out.println(d);
   }
 
 }
 class classmain
 {
   public static void main(String as[])
   {
     test ob1=new test(3);
     test2 ob2=new test2(5);
     ob2.display(ob1);
    }
 }
     
