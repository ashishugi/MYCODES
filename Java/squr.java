class square
{
   int a,b,n;
   static int z=5;
   void display()
   {
    for(int i=1;i<=n;i++)
    { 
     System.out.print(i+" ");
    }
   }
   
}

 class squr
 { static int z=19;
 
   public static void main(String x[])
   {
     square ob = new square();
     ob.a=10;
     ob.b=20;

     ob.n=10;
     ob.display();
     System.out.println("value of a is "+ob.a+"and value of b is"+ob.b);
     System.out.println(square.z+" : -> value of the other class "+squr.z+"value of main");
    }
 }
