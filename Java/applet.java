import java.applet.*;
import java.awt.*;
public class applet extends Applet implements Runnable
 {
    int x=1,y=10;
    public void init()
    {
       Thread th = new Thread(this);
       th.start();
     }
     public void run()
     {
       try
       {
            
            for(int j=1;j<=10;j++)
            {
                x=0;
                
                 for(int i=1;i<=800;i++)
                 {
                  x=x+1;
                  repaint();
                  Thread.sleep(25);
                 }
                 y=y+50;
                 for(int i=1;i<=800;i++)
                 {
                   x=x-1;
                  repaint();
                  Thread.sleep(25);
                 }
            
                             y=y+50;
            
            
            
           } 
            
       } // end of try block
       catch(Exception e)
       {
       }
     } // end of run function
     public void paint(Graphics g)
      {
        g.drawArc(100+x,0+y,100,100,90,360);
        g.drawString("ASHISH",120+x,30+y);
        g.drawRect(100,10,900,600);
      }
      
      
 }
 
 
 /*<applet code="applet" height="900" width="900"></applet>*/
