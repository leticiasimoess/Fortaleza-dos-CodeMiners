/*DESAFIO 01*/
/*Ordenação de Poções com Bubble Sort*/

#include<stdio.h>
#include<stdlib.h>

void trocar(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}

void bubbleSort(int array[], int quantidade){
   // TODO: Implemente o algoritmo "Bubble Sort".
  // Dica: O método "trocar" pode ser útil ;)
int troca = 1;
while (troca) {
troca = 0;
for (int i = 0; i < quantidade - 1; i++) {
if (array[i] > array[i+1]) {
trocar(&array[i], &array[i+1]);
troca = 1;
}
}
}
}

int main() {
// Lê os nossos dados de entrada:
int quantidade;
scanf("%d", &quantidade);
int frascos[quantidade];
for (int i = 0; i < quantidade; i++) {
scanf("%d", &frascos[i]);
}

// Executa o algoritmo "bubbleSort" para ordenar os "frascos".
bubbleSort(frascos, quantidade);

// Imprime os "frascos" ordenados.
for (int i = 0; i < quantidade; i++) {
printf("%d ", frascos[i]);
}

return 0;
}

// Aqui vamos Iniciar uma variável "troca" como verdadeira.
//Enquanto "troca" for verdadeira:
        // a. Definir "troca" como falsa.
        // b. Percorrer o array de entrada da posição 0 até a posição "quantidade - 1".
        // c. Se o elemento atual é maior do que o próximo elemento, chamar a função "trocar" para trocá-los e definir 
        // "troca" como verdadeira. 
// Por ultimo retornar o array ordenado.


/*DESAFIO02*/
/*Ordenação de Relíquias com Insertion Sort*/
#include <stdio.h>
#include <stdlib.h>

void insertionSort(int reliquias[], int quantidade) {
  // TODO: Implemente o algoritmo de ordenação "Insertion Sort".
   for (int i = 1; i < quantidade; i++) {
    int atual = reliquias[i];
    int j = i - 1;
    while (j >= 0 && reliquias[j] > atual) {
      reliquias[j + 1] = reliquias[j];
      j--;
    }
    reliquias[j + 1] = atual;
  }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int  reliquias[quantidade];
  for (int i = 0; i < quantidade; i++) {
    scanf("%d", & reliquias[i]);
  }

  // Executa o algoritmo "insertionSort" para ordenar os "reliquias".
  insertionSort(reliquias, quantidade);

  // Imprime as "reliquias" ordenados
  for (int i = 0; i < quantidade; i++) {
    printf("%d ",  reliquias[i]);
  }
  return 0;
}

//Para ordenar os elementos do vetor reliquias em ordem crescente utilizando o algoritmo de ordenação Insertion Sort 
// e imprimir cada número separado por um espaço.
//O algoritmo Insertion Sort é implementado na função insertionSort, onde a cada iteração do laço externo, 
// um elemento é inserido na posição correta do subvetor ordenado à esquerda. 
// A impressão dos números ordenados é feita no laço for ao final da função main.



/*DESAFIO03*/
/*Ordenação de Armaduras com Selection Sort*/
#include <stdio.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int quantidade){ 
  // TODO: Implemente o algoritmo "Selection Sort" para ordenação DECRESCENTE.
  // Dica: O método "trocar" pode ser útil ;)
   for (int i = 0; i < quantidade - 1; i++) {
        int indice_maior = i;
        for (int j = i + 1; j < quantidade; j++) {
            if (array[j] > array[indice_maior]) {
                indice_maior = j;
            }
        }
        if (indice_maior != i) {
            trocar(&array[i], &array[indice_maior]);
        }
    }
  
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int armaduras[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &armaduras[i]);
  }
  
  // Executa o algoritmo "selectionSort" para deixar as "armaduras" em ordem DECRESCENTE.
  selectionSort(armaduras, quantidade);
  
  // Imprime as "armaduras" ordenados.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", armaduras[i]);
  }
  
  return 0;
}


/*O objetivo desse desafio é implementar um algoritmo de ordenação chamado "Selection Sort"
para ordenar um array de números inteiros em ordem decrescente. Esse algoritmo funciona dividindo
o array em duas partes: a parte ordenada e a parte não ordenada. A cada iteração, o algoritmo encontra
o maior elemento da parte não ordenada e o move para o final da parte ordenada. O processo é repetido até
que todo o array esteja ordenado. /*


/*DESAFIO 04*/
/*Ordenação de Joias com Quick Sort*/

#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int particionar(int array[], int inicio, int fim) {
  int pivo = array[(inicio + fim) / 2];
  int i = inicio - 1;
  int j = fim + 1;
  while (i < j) {
    do {
      i++;
    } while (array[i] < pivo);
    do {
      j--;
    } while (array[j] > pivo);
    if (i < j) {
      trocar(&array[i], &array[j]);
    }
  }
  return j;
}

void quickSort(int array[], int inicio, int fim){ 
  if (inicio < fim) {
    int p = particionar(array, inicio, fim);
    quickSort(array, inicio, p);
    quickSort(array, p + 1, fim);
  }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int joias[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &joias[i]);
  }
  
  int inicio = 0;
  int fim = quantidade - 1;
  // Executa o algoritmo "quickSort" para ordenar as "joias".
  quickSort(joias, inicio, fim);
  
  // Imprime as "joias" ordenadas.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", joias[i]);
  }
  
  return 0;
}

/*O algoritmo Quick Sort é um método de ordenação eficiente que utiliza a técnica de divisão e conquista.
A ideia é selecionar um elemento da lista, chamado de pivô, e particionar a lista de forma que todos 
os elementos menores que o pivô fiquem à esquerda e os maiores à direita. Esse processo é repetido
recursivamente nas sublistas geradas até que a lista esteja completamente ordenada.
Para implementar o Quick Sort em C, podemos criar uma função recursiva que recebe como parâmetros a 
lista a ser ordenada, o índice do primeiro elemento (inicio) e o índice do último elemento (fim). 
Na primeira chamada da função, os valores de inicio e fim são 0 e n-1, respectivamente, onde n é o
tamanho da lista.
Dentro da função quickSort, podemos escolher o pivô como sendo o elemento do meio da lista 
(ou qualquer outro elemento). Em seguida, percorremos a lista da esquerda para a direita e da direita para
a esquerda ao mesmo tempo, comparando cada elemento com o pivô e trocando de lugar os elementos que estão
no lugar errado.
Ao final do processo, o pivô estará na posição correta, separando os elementos menores à esquerda e os 
maiores à direita. Então, chamamos recursivamente a função quickSort para as sublistas à esquerda e à 
direita do pivô, repetindo o processo até que a lista esteja completamente ordenada.
A função trocar pode ser utilizada para trocar de lugar dois elementos na lista*/


/*DESAFIO 05*/
/*Garantindo Sua Vaga na CodeMiners I/O com Busca Binária*/
#include <stdio.h>
#include <stdbool.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

bool estaOrdenado(int array[], int quantidade) {
  for (int i = 1; i < quantidade; i++) {
    if (array[i - 1] > array[i]) {
      return false;
    }
  }
  return true;
}

void bogoSort(int array[], int quantidade) {
  while (!estaOrdenado(array, quantidade)) {
    for (int i = 0; i < quantidade; i++) {
      int j = i + rand() % (quantidade - i);
      trocar(&array[i], &array[j]);
    }
  }
}

int buscaBinaria(int array[], int quantidade, int valor) {
  int esquerda = 0;
  int direita = quantidade - 1;

  while (esquerda <= direita) {
    int meio = (esquerda + direita) / 2;

    if (array[meio] == valor) {
      return true;
    } else if (array[meio] < valor) {
      esquerda = meio + 1;
    } else {
      direita = meio - 1;
    }
  }

  return false;
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int conteudos[quantidade];
  for (int i = 0; i < quantidade; i++) {
    scanf("%d", &conteudos[i]);
  }

  // Ordena os conteúdos usando Bogo Sort!?
  bogoSort(conteudos, quantidade);

  bool encontrou = buscaBinaria(conteudos, quantidade, 777);

  if (encontrou) {
    printf("S\n");
  } else {
    printf("N\n");
  }

  return 0;
}

/*A implementação da busca binária 
Inicialização da esquerda como 0 e direita como quantidade - 1.
Enquanto a esquerda for menor ou igual a direita, devemos calcular o índice do elemento do meio como
(esquerda + direita) / 2.
Caso o valor na posição do meio for igual ao valor desejado, retorne verdadeiro.
e se o valor na posição do meio for menor do que o valor desejado, atualize esquerdacomo meio + 1.
Caso contrário, atualize direitacomo meio - 1.
Se chegarmos a este ponto, o valor desejado não está presente na lista, então retorne falso.*/
