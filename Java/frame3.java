 
 
 import java.awt.*;
 import java.awt.event.*;
  class frame3 extends Frame implements ItemListener
   {
     Checkbox cb1,cb2,cb3;
     TextField tf;
      frame3()
       {
                 setLayout(new FlowLayout());
         CheckboxGroup cg = new CheckboxGroup();
         cb1 = new Checkbox("Car",cg,true);
         cb2 = new Checkbox("Bike",cg,true);
         cb3 = new Checkbox("Mercedies",cg,true);
         tf = new TextField(10);
         add(tf);
         add(cb1);
         add(cb2);
         add(cb3);
         cb1.addItemListener(this);
         cb2.addItemListener(this);
         cb3.addItemListener(this);
       }
       
       public void itemStateChanged(ItemEvent ie)
       {
         if(ie.getSource()==cb1)
         {
           tf.setText(cb1.getLabel());
         }
         if(ie.getSource()==cb2)
         {
         tf.setText(cb2.getLabel());
         }
         
         if(ie.getSource()==cb3)
         { 
         
            tf.setText(cb3.getLabel());
          }
       }
       
       public static void main(String a[])
       {
          frame3  ob =new frame3();
          
          ob.setVisible(true);
          ob.setSize(300,300);
        }
}
