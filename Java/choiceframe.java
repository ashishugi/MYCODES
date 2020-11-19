
import java.awt.*;
import java.awt.event.*;
  
  class choiceframe extends Frame implements ItemListener, ActionListener
    {
       TextField tf;
       Button b1;
       Choice ch;
       choiceframe()
       {
          setLayout(new CardLayout(5,20));
          tf =new TextField(15);
          b1 = new Button("Submit");
          ch = new Choice();
          ch.addItem("Apple");
          ch.addItem("Mango");
          ch.addItem("Grapes");
          ch.addItem("Orange");
          ch.addItem("Papaya");
          ch.addItem("Strawberry");
          add(b1);
          add(tf);
          add(ch);
          ch.addItemListener(this);
          b1.addActionListener(this);
        }
        
        public void itemStateChanged(ItemEvent ie)
          {
          
        
          }
          public void actionPerformed(ActionEvent ae)
          {
                 tf.setText(ch.getSelectedItem());
          }
          public static void main(String a[])
          {
            choiceframe ob = new choiceframe();
         
            ob.setSize(300,300);
            ob.setVisible(true);
           }
     } 
        
