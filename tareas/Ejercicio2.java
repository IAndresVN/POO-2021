import java.util.Scanner;

public class Ejercicio2{

  private static int numin;
  private static int num1;
  private static int numsup;


  public static void main (String [] args) {

    Scanner leer = new Scanner(System.in);
    
    System.out.println("Escriba el primer número(numero inferior)");
    int numin = leer.nextInt();
    
    System.out.println("\nEscriba el segundo número");
    int numsup = leer.nextInt();

    for(numin = numin;numin <= numsup; numin++){
      if(numin % 2==0){
        System.out.println(numin);
      }
    }
  }
}