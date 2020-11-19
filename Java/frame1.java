import java.awt.*;
import java.awt.event.*;


class frame1 extends Frame implements ActionListener,TextListener
   {
      TextField tf1,tf2;
      Button b1,b2;
      frame1()
      {
      setLayout(new FlowLayout());
      b1 = new Button("Ok");
      b2 = new Button("cancel");
      tf1 = new TextField(10);
      tf2 = new TextField(10);
      add(tf2);
      add(b1);
      add(b2);
      add(tf1);
      tf1.addTextListener(this);
      b1.addActionListener(this);
      b2.addActionListener(this);
      //tf2.addActionListener(this);
      }
      public void actionPerformed(ActionEvent ae)
      {
         if(ae.getSource()==b1)
         {
           tf1.setText("OK");
          }
          if(ae.getSource()==b2)
          
          { tf1.setText("cancel");
          
          }
          
       }
       public void textValueChanged(TextEvent te)
       {
         tf2.setText(tf1.getText());
        }       
       
    public static void main(String a[])
    {
      frame1 obj = new frame1();
        
      obj.setSize(300,300);
      obj.setVisible(true);
     }
   }
      
