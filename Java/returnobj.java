/*class test
{
  int x=10;
  int y=1;
  test(int x,int y)
  {
   this.x=x;
   this.y=y;
  }
  void show()
  {
   System.out.println(x);
  }
   test fun_return()
   {
    return this;
   }
}
class returnobj
{
 public static void main(String a[])
   {
    test ob1=new test(1,2);
    test ob2=new test(5,6);
    System.out.println(ob1.x+" and "+ob1.y);
    System.out.println(ob2.x+" and "+ob2.y);
    ob2=ob1.fun_return();
    System.out.println(ob1.x+" and "+ob1.y);
    System.out.println(ob2.x+" and "+ob2.y);
   }
}
    */
    
    //***************************** Inheritance Java ******************************************//
class test
{
  int a;
  int c;
  test(int x,int y)
  {
  a=x;
  c=y;
  }
  void show()
  {
   System.out.println(a);
      System.out.println(c);
  }
  
}
class test2 extends test
{
 int m;
 String name;
  test2(int a,String abc)
  {
   m=a;
   name= abc;
  }
  void print()
  {
   System.out.println(m);
   System.out.println(name);
  }
  
}


class returnobj
{
 public static void main(String a[])
   {
    //test ob1=new test(1,2);
 //   test2 ob2=new test2(5,"ashish");
   // System.out.println(ob1.a+" and "+ob1.c);
   // ob1.show();
   // ob2.print();
   tes
    
    
   }
}
