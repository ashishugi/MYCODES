import java.applet.*;
import java.awt.*;
import java.awt.event.*;
class applet1 extends Applet implements MouseMotionListener
  {
    int x=20,y=20;
    
    public void init()
    {
      addMouseMotionListener(this);
    }
    public void mouseMoved(MouseEvent me)
    {
      x=me.getX();
      y=me.getY();
      repaint();
    }
    
   /* public void mouseMoved(MouseEvent me)
    {
    }*/
    public void mouseDragged(MouseEvent me)
    {
    }
    public void paint(Graphics g)
    {
     g.drawOval(x,y,40,40);
    }  
  }
  
/*<applet code="applet1" height="500" width="500"></applet>*/  

  
