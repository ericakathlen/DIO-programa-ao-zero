import java.util.Scanner;

public class CalculoImposto {

    public static void main(String[] args){

        Scanner leitorEntrada = new Scanner(System.in);

        float valorSalario = leitorEntrada.nextFloat();
        float valorBeneficios = leitorEntrada.nextFloat();

        float valorImposto =0;
            if(valorSalario >= 0 && valorSalario <= 1100) {
                valorImposto = 0.05F * valorSalario;
            } else if(valorSalario >=1100.01 && valorSalario <=2500){
                valorImposto = 0.10F * valorSalario;
            } else if(valorSalario >2500.01){
                valorImposto = 0.15F * valorSalario;
            }else {
                System.err.println("Valor Invalido!");
            }

        float saida = valorSalario - valorImposto + valorBeneficios;
        System.out.printf("%.2f\n", saida);
    }

}