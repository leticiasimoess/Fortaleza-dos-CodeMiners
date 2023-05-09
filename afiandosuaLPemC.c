/*DESAFIO 01*/
/*Monitorando a Conta de Energia*/
#include <stdio.h>
int main() {
  int consumo1, consumo2, consumo3;
  float media;

  // Lendo os valores de consumo das três máquinas
  scanf("%d %d %d", &consumo1, &consumo2, &consumo3);

  //TODO: Calcule a média de consumo e a imprima com duas casas decimais.
  // Calculando a média de consumo
  media = (float)(consumo1 + consumo2 + consumo3) / 3;

  // Imprimindo a média com duas casas decimais
  printf("%.2f\n", media);

  return 0;
}

//Nesse código, é feita a leitura dos valores de consumo das três máquinas utilizando a função scanf. 
// Em seguida, é calculada a média de consumo dos três valores lidos e armazenada na variável media. 
// Para imprimir a média com duas casas decimais, utiliza-se a função printf com o formato "%.2f".

/*DESAFIO 02*/
/*Armazenamento de Dados é Vida!*/
#include <stdio.h>

int main() {
  int capacidadeAtual, aumentoPercentual;
  float novaCapacidade;

  // Lê as entradas do usuário
  scanf("%d %d", &capacidadeAtual, &aumentoPercentual);

  // Calcula a nova capacidade do disco de Mithril
  novaCapacidade = capacidadeAtual * (1 + aumentoPercentual / 100.0);

  // Imprime a nova capacidade 
  printf("%.0f\n", novaCapacidade);

  return 0;
}
// Nesse código, é feita a leitura das entradas do usuário utilizando a função scanf.
// Em seguida, é calculada a nova capacidade total das máquinas, que é obtida a partir da fórmula 
// novaCapacidade = capacidadeAtual * (1 + aumentoPercentual / 100.0). 
// Para imprimir a nova capacidade sem casas decimais, utiliza-se a função printf com o formato "%.0f".

/*DESAFIO 03*/
/*Palavras Têm Poder!*/


#include <stdio.h>
#include <string.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char palavra[]) {
  int i, j;
  char temp;
  
  // Obtém o tamanho da palavra.
  int tamanho = strlen(palavra);
  
  // Inverte a ordem das letras utilizando o algoritmo de swap.
  for (i = 0, j = tamanho - 1; i < j; i++, j--) {
    temp = palavra[i];
    palavra[i] = palavra[j];
    palavra[j] = temp;
  }
}

int main() {
  char palavra[100];

  // Lê a palavra a ser invertida do usuário.
  scanf("%s", palavra);

  // Chama a função que inverte a palavra.
  inverter(palavra);

  // Imprime a palavra invertida na tela.
  printf("%s", palavra);

  return 0;
}
//Nesse código, a função "inverter" utiliza o algoritmo de swap para inverter a ordem das letras da palavra. 
//Primeiro, é obtido o tamanho da palavra utilizando a função "strlen". Em seguida, é realizado um loop que 
//percorre metade da palavra e troca a posição das letras utilizando uma variável temporária "temp".
// Ao final desse loop, a palavra está invertida.
//No "main", é feita a leitura da palavra a ser invertida do usuário utilizando a função "scanf".
//Em seguida, é chamada a função "inverter" passando a palavra como parâmetro. 
//Por fim, a palavra invertida é impressa na tela utilizando a função "printf".


/*DESAFIO 04*/
/*Cogumelos Por Todos os Lados*/

#include <stdio.h>

int main() {
  int minutos, cogumelosColhidos;

  // Lê a quantidade de minutos disponíveis para colheita
  scanf("%d", &minutos);

  // Calcula a quantidade de cogumelos colhidos
  cogumelosColhidos =  minutos / 3;


  // Imprima o resultado
  printf("%d\n", cogumelosColhidos);

  return 0;
}

// o programa vai lê a quantidade de minutos disponíveis para colheita e calcula a quantidade de cogumelos colhidos
// dividindo o número de minutos por 3. Como são colhidos 1 cogumelo a cada 3 minutos, 
//a divisão inteira resulta na quantidade total de cogumelos colhidos. 
// Em seguida, o programa imprime essa quantidade na tela.

/*DESAFIO05*/
/*Fermentar é Viver*/

#include <stdio.h>

int main() {
  int temperatura;
  scanf("%d", &temperatura);
  
  // TODO: Crie as condições de acordo com as saídas deste desafio.
  if (temperatura < 18) {
    printf("Baixa");
  } else if (temperatura > 24) {
    printf("Alta");
  } else {
    printf("Ideal");
  }
  
  return 0;
}

//Aqui utilizamos um comando condicional if-else para verificar se a temperatura está abaixo de 18 graus, 
//acima de 24 graus ou dentro do intervalo ideal (entre 18 e 24 graus).
// Dependendo do resultado da verificação, a mensagem correspondente é impressa na tela utilizando o comando printf.