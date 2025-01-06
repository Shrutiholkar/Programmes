import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
class login1 extends JFrame implements  ActionListener
{
 JLabel l1,l2;
 JTextField t1;
 JPasswordField p1;
 JButton b1,b2;
	 
 login1()
 {
 super();
 setSize(500,500);
 setTitle("LOGIN");
 setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 l1=new JLabel("username:");
 l2=new JLabel("password");
 t1=new JTextField(20);
 p1=new JPasswordField(20);
 b1=new JButton("Login");
 b2=new JButton("cancel");
 add(l1);add(t1);
 add(l2);add(p1);
 add(b1);add(b2);
 b1.addActionListener(this);
 b2.addActionListener(this);
 setLayout(new FlowLayout());
    
}
 public void actionPerformed(ActionEvent ae)
{
  if(ae.getSource()==b1)
{
if((t1.getText().equals("sai")) && (p1.getText().equals("sai123")))
{
JOptionPane.showMessageDialog(b1,"LOGIN SUCCESSFUL");
				 
}
			 else
JOptionPane.showMessageDialog(b1, "username and pass does not match");
 }		  
			 if(ae.getSource()==b2)				 t1.setText(" ");
				 p1.setText(" ");
				 
 }
			 
}
		 
}	 
	 
public class login
{
  public static void main(String[] args) 
  {
    login1 ob=new login1();
  }

}

