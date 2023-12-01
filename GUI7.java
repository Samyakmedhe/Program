import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        JFrame fobj = new JFrame(title);
        fobj.setSize(300,600);
  b       fobj.setVisible(true);

        JButton bobj = new JButton("Submit");
        fobj.add(bobj);
        fobj.addWindowListener(new Marvellouslistener());
    }
    
}

class Marvellouslistener extends WindowAdapter
{
   
    public void windowClosing(WindowEvent obj) 
    {
        System.exit(0);
    }
    
}
class GUI7
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA49");
    }
}