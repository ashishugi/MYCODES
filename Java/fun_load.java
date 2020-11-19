class test
{
   int a,b;
   char c='q';
   test()
   {
    System.out.println("constructor is called without parameter \n");
    }
     test(int x)
   {
    a=x;
    System.out.println(a+" constructor is called");
    }
     test(int x,int y)
   { a=x;
   b=y;
    System.out.println(a+" constructor is called "+b);
    }
     test(int x,int y,char c)
   { a=x;b=y;c=c;
    System.out.println(a+" "+b+" and this is the local one  =>"+c+" now this is of class=>"+this.c);
    }
   
    
   void sum()
   {
    System.out.print("No parameter\n");
    }
     void sum(int x)
   {
   a=x;
    System.out.print(a+" \n");
    }
     void sum(int a,int b)
   {
    System.out.print(a+" and"+b+"3rd \n");
    }
     void sum(int a,int b,char c)
   {
    System.out.print(a+" , "+b+"and "+c+"in the 4th\n");
    }
}

class fun_load
{
 public static void main(String a[])
   {
    
    test ob=new test();
     test ob1=new test(1);
      test ob2=new test(2,3);
       test ob3=new test(1,2,'a');
     }
}
