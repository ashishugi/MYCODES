import java.awt.*;
import java.awt.event.*;
  class frame2 extends Frame implements ItemListener
  {
     Checkbox c1,c2,c3;
     Radio r1;
       frame2()
       {
          setLayout(new FlowLayout());
          c1 = new Checkbox("Car");
          c2 = new Checkbox ("Scoter");
          
          c3 = new Checkbox("Bike");
          r1= new Radio("Bike");
          add(c1);
          add(c2);
          add(r1);
          add(c3);
          c1.addItemListener(this);
          c2.addItemListener(this);
          c3.addItemListener(this);
           r1.addItemListener(this);
         }
        public void itemStateChanged(ItemEvent ie)
        {
          
          }
          
        public static void main(String a[])
        {
           frame2 ob =new frame2();
            ob.setSize(300,300);
            ob.setVisible(true);
         }
   }
            
