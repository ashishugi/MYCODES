import java.awt.*;
import java.awt.event.*;

class login extends Frame implements ActionListener//,TextListener,ItemListener
  {
  
     TextField tf1,tf2,tf3,tf4;
     Button b1,b2;
     login() 
      {
        Panel p1,p2;
        setLayout(new BorderLayout());
        p1= new Panel();
        p2 = new Panel();
        p1.setLayout(new BorderLayout());
        p2.setLayout(new BorderLayout());
        tf1=new TextField(30);
        tf2=new TextField(30);
        add(tf1,BorderLayout.NORTH);
        add(tf2,BorderLayout.CENTER);
        tf3 = new TextField(11);
        tf4 = new TextField(11);
        add(tf3,BorderLayout.NORTH);
        add(tf4,BorderLayout.CENTER);
        tf3.setText("E-mail");
        tf4.setText("pass-word");
        add(p1,BorderLayout.CENTER);
        add(p2,BorderLayout.WEST);
        p1.add(tf1);
        p1.add(tf2);
        p2.add(tf3);
        p2.add(tf4);
        add(p1);
        add(p2);
      }
      public void actionPerformed(ActionEvent ae)
      { 
       
       
       }
      
      public static void main(String a[])
       { 
        login ob =  new login();
        ob.setSize(400,400);
        ob.setVisible(true);
       }
   }
        
        
    
