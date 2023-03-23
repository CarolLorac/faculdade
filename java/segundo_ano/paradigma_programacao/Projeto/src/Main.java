import EstruturasRepeticao.For;
import EstruturasRepeticao.While;
import EstruturasRepeticao.DoWhile;
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        For estruturaFor = new For();
        While estruturaWhile = new While();
        DoWhile estruturaDoWhile = new DoWhile();

        int pasta, exercicio;

        //ADICIONAR DO..WHILE PARA RODAR ATÉ A PESSOA DIGITAR 0
        System.out.println("PASTAS");
        System.out.println("1 - Estruturas de Repetição");
        System.out.println("Selecione a pasta desejada: ");
        pasta = s.nextInt();

        if (pasta == 1)
        {
            System.out.println("1 - For");
            System.out.println("2 - While");
            System.out.println("3 - Do...While");
            System.out.println("Selecione exercício: ");
            exercicio = s.nextInt();

            switch (exercicio)
            {
                case 1:
                    estruturaFor.Executar();
                    break;
                case 2:
                    estruturaWhile.Executar();
                    break;
                case 3:
                    estruturaDoWhile.Executar();
            }
        }
    }
}