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

**Fila** - é um estrutura de dados onde o primeiro elemento adicionado é o primeiro elemento a ser removido, seguindo a regra do FIFO (Frist In, First Out). Os elementos são adicionados ao final da fila e removidos do início.

**Diferença entre Pilha e Fila** - a principal diferença entre os dois é a ordem em que os elementos são adicionados e removidos. Na pilha, o último elemento é adicionado é o primeiro a ser removido, enquanto na fila, o primeiro elemento adicionado é o primeiro a ser removido.

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
``` C
if (x == 0)
{
    return;
}
if (x == 0)
{
    exit();
}
```

**Polonesa Invertida**
A forma convencional de escrever expressões é: operando operador operando (ex: 2 + 3). Entretanto, está não é a única forma. Um formato muito utilizado em computação é a "Polonesa Invertida", onde o operador fica após os operandos (ex: 2, 3, +). O uso de pilhas facilita muito esse tipo de operação.

ex:

![ex notação polonesa invertida](/c/segundo_ano/estrutura_dados/imagens/ex_polonesa_invertida.png)

**Custo Operacional**


**Árvores binárias**
Uma árvore binária (tem no máximo 2 nós-filhos) estará ordenada quando os menores nós estiverem à esquerda e os maiores à direita. Todas leituras são feitas lendo primeiro a esquerda e depois a direita.
![imagem árvore](/c/segundo_ano/estrutura_dados/imagens/arvore.png)

Passeios (quem define o tipo é a posição do V): 
Pré - ordem (VED) - visita, esquerda, direita 
Ordem (EVD) - esquerda, visita, direita (o resultado será em ordem crescente)
Pós - ordem (EDV) - esquerda, direita, visita
obs: o passeio sempre começa da raiz

## **Resumo**

Estruturas de dados são utilizadas para armazenar e acessar dados de maneira organizada e eficiente. O programador que seleciona a estrutura apropriada.

## Ponteiro
Os ponteiros são variáveis que armazenam o endereço de memória de outras variáveis.
``` C
int valor = 10;

//declaração variável ponteiro
int *ptr;

//atribuindo o endereço da variável ao ponteiro
ptr = &valor;
```



## Estruturas de dados lineares

**Array** - coleção com sequência contígua de elementos, ou seja, armazena mais de um elemento do mesmo tipo de dado sequencialmente (contígua - próximo, imediato). 
Cada elemento do array pode ser acessado diretamente usando um índice inteiro que representa a posição do elemento na sequência. Em compensação, o tamanho é definido no momento da criação e não pode ser alterado posteriormente.
Pode ser unidimensional(vetor) ou multidimensional(matriz). 

![imagem array](/c/segundo_ano/estrutura_dados/imagens/array.png)


**Pilha** - empilha um item acima do outro. Segue o padrão LIFO (Last In First Out), ou seja, o último elemento a entrar é o primeiro a sair.

![imagem pilha](/c/segundo_ano/estrutura_dados/imagens/pilha.png)

**Fila** - segue o padrão FIFO (First In First Out), ou seja, o primeiro a entrar é o primeiro a sair.

![imagem fila](/c/segundo_ano/estrutura_dados/imagens/fila.png)

**Lista ligada** - estrutura linear que armazena uma coleção de elementos dinamicamente. Cada lista encadeada tem 2 partes, a *seção de dados* e a *seção de endereço* que contém o endereço (ponteiro) do próximo elemento da lista, que é chamado de nó. 
![imagem lista ligada](/c/segundo_ano/estrutura_dados/imagens/lista_ligada.png)


**Links utilizados**
- [O que são estruturas de dados e como usá-las](https://www.edureka.co/blog/c-data-structures/#:~:text=Data%20Structures%20in%20C%20are,it%20according%20to%20their%20convenience.)
- [Array](https://www.guru99.com/array-data-structure.html)
- [Pilha](https://www.programiz.com/dsa/stack)
- [Lista ligada](https://www.sanfoundry.com/c-program-implement-singly-linked-list/)

