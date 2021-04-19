import java.util.Scanner;

public class Ejercicio2{

  private static int numin;
  private static int numf;
  private static int numw;
  private static int numsup;


  public static void main (String [] args) {

    Scanner leer = new Scanner(System.in);
    
    System.out.println("Escriba el primer número(numero inferior)");
    int numin = leer.nextInt();
    
    System.out.println("Escriba el segundo número");
    int numsup = leer.nextInt();
    System.out.println("\n");
    for(numf = numin;numf <= numsup; numf++){
      if(numf % 2==0){
        System.out.println(numf);
      }
    }
    System.out.println("\n");
    numw=numin;
    while(numw <=numsup){
      if(numw % 2!=0){
        System.out.println(numw);
      }
      numw++;
    }
  }
}