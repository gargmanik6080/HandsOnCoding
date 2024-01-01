import java.awt.*;
import java.awt.event.*;
public class awt extends Frame implements ActionListener{
    Button b;
    awt(){
        super("My window");
        b= new Button("Submit");
        add(b);
        b.addActionListener(this);
        setLayout(new FlowLayout());
        setSize(400, 400);
        setLocation(200,200);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent ae){
        System.out.println("Button clicked...");
    }
    public static void main(String ...x){
        new awt();
    }
}
