import EstruturasRepeticao.For;
import EstruturasRepeticao.While;
import EstruturasRepeticao.DoWhile;
import OrientacaoObjetos.Construtor;

import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        //Estruturas de Repetição
        For estruturaFor = new For();
        While estruturaWhile = new While();
        DoWhile estruturaDoWhile = new DoWhile();
        //Orientação a Objetos
        Construtor construtor = new Construtor();

        int pasta, exercicio;

        //ADICIONAR DO..WHILE PARA RODAR ATÉ A PESSOA DIGITAR 0
        System.out.println("PASTAS");
        System.out.println("1 - Estruturas de Repetição");
        System.out.println("2 - Orientação a Objetos");
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
                    break;
            }
        }
        else if (pasta == 2)
        {
            System.out.println("1 - Construtor");
            System.out.println("Selecione o exercício: ");
            exercicio = s.nextInt();

            switch (exercicio)
            {
                case 1:
                    construtor.Executar();
                    break;
            }
        }
    }
}