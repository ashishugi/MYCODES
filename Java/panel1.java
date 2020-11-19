

import java.awt.*;
import java.awt.event.*;
 class panel1 extends Frame implements ActionListener
  {
  
    Button b1,b2,b3;
    CardLayout cl;
    panel1()
        {
           Panel p1,p2,p3;
           cl = new CardLayout();
           setLayout(cl);
           p1=new Panel();
           p2= new Panel();
           p3 = new Panel();
           b1 = new Button("Enter");
           b2 = new Button("Next");
           b3 = new Button("Finish");       
           p1.add(b1);
           p1.setBackground(Color.red);
           p2.add(b2);
           p2.setBackground(Color.blue);
           p3.add(b3);
           p3.setBackground(Color.green);
           add(p1);
           add(p2);
           add(p3);
           b1.addActionListener(this);
           b2.addActionListener(this);
           b3.addActionListener(this);
           
        
        
        
         }
    public void actionPerformed(ActionEvent ae)
     {
       cl.next(this);
     }
     
     public static void main(String a[])
     { 
        panel1 obj = new panel1();
        obj.setSize(400,400);
        obj.setVisible(true);
      }
}
     
