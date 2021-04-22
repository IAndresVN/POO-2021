import java.awt.*;
import javax.swing.JApplet;
import javax.swing.JFrame;

public class Circunferencia extends JApplet {

  private static int x;
  private static int y;
  
  public void paint (Graphics g) {
    for(x=50;x>=10;x--){
      g.drawString (".", x, y);
      for(y=100;y<=140;y++){
        g.drawString (".", x, y);
      } 
    }
    for(x=50;x<=90;x++){
      g.drawString (".", x, y);
      for(y=100;y>=60;y--){
        g.drawString (".", x, y);
      }
    }
    for(x=50;x<=90;x++){
      g.drawString (".", x, y);
      for(y=100;y<=140;y++){
        g.drawString (".", x, y);
      }
    } 
    for(x=50;x>=10;x--){
      g.drawString (".", x, y);
      for(y=100;y>=60;y--){
        g.drawString (".", x, y);
      }
    } 
  }
  public static void main (String[] args){
    JFrame frame = new JFrame ("Cargando JApplet");
    Circunferencia circunferenciaApplet = new Circunferencia();
    circunferenciaApplet.init();
    frame.getContentPane().add(circunferenciaApplet);
    frame.setSize(200,200);
    frame.setVisible(true);
  }
} 