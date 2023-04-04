# CURSO C FACULDADE 👩‍🎓
**Estrutura de dados** - organização de dados na memória de um computador ou dispositivo de armazenamento. Utilização: inserir, excluir, localizar, percorrer e classificar registros (manipulação de dados)
Dados estruturados da maneira correta trás melhor desempenho de processamento.

## Tipos
**Pilha** (Último a entrar é o primeiro a sair)- são estruturas de dados de elevado grau de abstração. Elas são baseadas em listas ligadas, mas obedecem uma política de acesso que restrunge as saídas e as entradas de elementos ao topo da pilha. O controle de recursividade e organização de chamdas de funções é realizado com pilhas. Análise sintática de compilação e de expressões também é realizada com pilhas.
Principais métodos de acesso:
- Push(p, e) : empilha no topo da PILHA p o ELEMENTO e
- e = Pop(p) : desempilha o elemento do topo da PILHA p e atribuir seu valor ao ELEMENTO e
- e = Top(p) : consulta o valor do topo da PILHA p e atribui seu valor ao ELEMENTO e
- isEmpty(p) : verifica se a PILHA p está vazia

## Conceitos
**Struct** - é uma coleção de variáveis de diferentes tipos de dados (semelhante a uma classe na programação orientada a objetos).
[Código exemplo](/conceitos/struct.c)

**Malloc()** - uma das funções responsáveis por alocação dinâmica de memória. 
Utilizamos quando quando:
 - não sabemos o tamanho/quantidade de espaço de memória que deve ser alocada;
 - queremos alocar durante a execução do programa.

ex de utilização: quando não sabemos o tamanho do vetor. [Código exemplo](/conceitos/malloc.c)

Links úteis: 
[Alocação dinâmica de memória em C](https://www.programiz.com/c-programming/c-dynamic-memory-allocation) e
[Como alocar um vetor dinâmico](https://wagnergaspar.com/como-alocar-um-vetor-dinamico-na-linguagem-c/)

## Aulas

**Recursividade** - Quando falamos de recursividade, precisamos ter 2 informações:
1) Condição de parada
2) Como reduzir o problema

**Passagem por valor e por referência**
'* param - por valor
** param - por referencia

**Uso de ponto(.) e seta(->)**
aluno.ra -> alocação estática de memória
aluno->ra -> alocação dinâmica de memória (ou seja, quando vc nao sabe quantas alocações serão realizadas - tamanho)

**Diferença entre return e exit**
Return - sai da função que está sendo executada
Exit - finaliza a execução do programa
if (x == 0)
{
    return;
}
if (x == 0)
{
    exit();
}

