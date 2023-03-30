package OrientacaoObjetos;

public class Produto
{
    public String nome;
    public double preco;
    public int quantidade;

    public Produto(String nome, double preco, int quantidade)
    {
        this.nome = nome;
        this.preco = preco;
        this.quantidade = quantidade;
    }

    public void Executar()
    {
        System.out.println("A " + nome + " tem " + quantidade + " item(ns) e custa R$" + preco);
    }
}
