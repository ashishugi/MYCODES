class A
{
   int x=4;
   void function()
   {
    System.out.print(x);
   }
}
class exception
{ 
  public static void main(String args[])
  {
   A ob1=null;
   try {
   
   ob1.function();
   }
   catch(NullPointerException e)
   {
    System.out.println("No memory allocate to the object ");
  //                     System.out.println(e);
   }
   
   int a=2;
   int b=0;
   try
   {
   int c=a/b;
   System.out.print(c);
   }
    catch(Exception e)
      { int c=a/1;
     System.out.println(c);
     }    
  }
}
