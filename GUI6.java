import java.awt.*;
import java.awt.event.*;

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(300,600);
        fobj.setVisible(true);

        Button bobj = new Button("Submit");
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
class GUI6
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA49");
    }
}