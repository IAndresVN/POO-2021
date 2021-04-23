import java.awt.*;
import javax.swing.JApplet;
import javax.swing.JFrame;
import java.lang.Math;

public class Circulo extends JApplet {

  private static int x;
  private static int y;
  private static int d;
  
  public void paint (Graphics g) {

    d=75;
    for(x=0;x<=d*2;x++){
      for(y=0;y<=d*2;y++){
        if((Math.pow(x-d,2)) + (Math.pow(y-d,2))<=(Math.pow(d,2))){
          g.drawString (".", x+10, y+10);
        }
      }
    }

  }
  public static void main (String[] args){
    JFrame frame = new JFrame ("Cargando JApplet");
    Circulo circuloApplet = new Circulo();
    circuloApplet.init();
    frame.getContentPane().add(circuloApplet);
    frame.setSize(200,200);
    frame.setVisible(true);
  }
} 