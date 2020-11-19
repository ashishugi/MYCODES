class java1 
{
  public static void main(String args[])
  {
    System.out.println("first program on java");
    String str = "Ashish Kumar Gupta";
    System.out.println("MY name is "+str);
    int a=3;int b=4;
    boolean res = a>b;
    if(res)
      {
       System.out.println("A is greater with value "+a);
       }
       
     else
     {
            System.out.println("B is greater with value "+b);
     }
     int days[][] =  new int[30][10];
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
           days[i][j]=i;
           
           }
     }
     
       for(int i=0;i<3;i++)
     {   
     
         for(int j=0;j<3;j++)
         {
         
        System.out.print(""+days[i][j]+" ");
        }
        System.out.println("");
     }
   }
}
