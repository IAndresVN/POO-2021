public class Carro{

private static String color;
private static String marca;
private static String modelo;

  
  public static void main(String[] argv){
    valores("azul","BMW","2022");
    System.out.print("Este es un carro de color "+color+" de marca "+marca+" de modelo "+modelo);
  }
  public static void valores(String col,String mar,String model) {
    color = col;
    marca = mar;
    modelo = model;
  }
}