import java.util.Scanner;

public class Calculadora{

private static int resultado;

  public static void main (String [] args) {
    Scanner leer = new Scanner(System.in);
    
    System.out.println("Escriba la operación(+,-,x,/)");
    String operacion = leer.nextLine();
    
    System.out.println("\nEscriba el primer número");
    int num1 = leer.nextInt();

    System.out.println("\nEscriba el segundo número");
    int num2 = leer.nextInt();

    calculadora(num1,num2,operacion);

  }
  public static void calculadora(int num1,int num2,String operacion){
    switch(operacion){
      
      case "+":
      resultado=num1+num2;
      break;

      case "-":
      resultado=num1-num2;
      break;

      case "x":
      resultado=num1*num2;
      break;

      case "/":
      resultado=num1/num2;
      break;

      default:
      System.out.println("operacion no valida,vuelva a intentar");
    }
     System.out.printf("El resultado es:"+resultado);
  }
}