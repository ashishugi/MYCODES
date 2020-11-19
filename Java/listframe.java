
import java.awt.*;
import java.awt.event.*;
  
  class listframe extends Frame implements ItemListener, ActionListener
    {
       TextField tf;
       Button b1;
       Choice ch;
       List ls1,ls2,ls3,ls4;
       listframe()
       {
          setLayout(new FlowLayout());
          ls1 = new List(2,true);
          ls2 = new List(2,true);
          ls3 = new List(2,true);
          ls4 = new List(2,true);
          
          tf =new TextField(15);
          ls1.add("Tv");
          ls1.add("LCD");
          ls1.add("Washing Machine");
         
          ls2.add("Samsung");
          ls2.add("MI");
          ls2.add("Onida");
          
          ls3.add("Smarty");
          ls3.add("Bravia");
          ls3.add("Sony OLED");
          
          ls4.add("Vediocon");
          ls4.add("sam");
          ls4.add("hybrid");
          
         
          add(ls1);
          ls1.addItemListener(this);
         
        
        }
        
        public void itemStateChanged(ItemEvent ie)
          {
            if("Tv"==ls1.getSelectedItem())
            {
             add(ls2);
            // ls2.addItemListener(this);
            }
           
            if("LCD"==ls1.getSelectedItem())
            {
             add(ls3);
            // ls3.addItemListener(this);
            }
            
            if("Washing Machine"==ls1.getSelectedItem())
            {
             add(ls4);
            // ls4.addItemListener(this);
            }
         
         
          }
          public void actionPerformed(ActionEvent ae)
          {
                 
          }
          public static void main(String a[])
          {
            listframe ob = new listframe();
         
            ob.setSize(300,300);
            ob.setVisible(true);
           }
     } 
        
