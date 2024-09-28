//inclui a biblioteca padrao de entrada e saida 
#include <stdio.h>

//define a função "soma entre numeros" que recebe num1 e num2 como parametros e retorna a soma dos numeros inteiros que estao entre esses dois numeros 
int somaEntreNumeros(int num1, int num2)
{
	if (num1 <= 0 || num2 <= 0)
  {
		printf("\nOs Numeros devem ser Positivos!!!\n");
		return 0; //Valor Invalido
	}
//verifica se algum dos numeros fornecidos é menor ou igual a zero. se alguma dessas condições forem verdadeiras, entao a soma nao acontece.

	int soma = 0;
//declara uma variavel soma que sera usada para armazenar o valor acumulado da soma dos numeros entre num1 e num2
	int inicio = (num1 < num2) ? num1 : num2; //Ternario
	int fim = (num1 < num2) ? num2 : num1; //Ternario
//utiliza o operador para determinar qual dos numeros é menor (inicio) e qual é maior (final)

	for (int i = inicio + 1; i < fim; i ++)
  {
		soma += i;
	}
/*Inicia um loop for que percorre os números entre inicio (o menor número) e fim (o maior número), começando de inicio + 1 e terminando antes de fim. A cada iteração, o valor de i é adicionado à variável soma.
*/
	return soma;
}

int main()
{
	int num1;
	int num2;
	int resultado;

	printf("Digite o Primeiro Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &num1);
/*Exibe a mensagem "Digite o Primeiro Numero Inteiro:" no console e usa scanf para ler o valor digitado pelo usuário, armazenando-o na variável num1. O fflush(stdout) garante que a saída seja imediatamente exibida no console, evitando problemas de buffer.*/

	printf("Digite o Segundo Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &num2);

	resultado = somaEntreNumeros(num1, num2);

	if (resultado > 0)
  {
		printf("\nA Soma dos Numeros entre %d e %d e: %d\n", num1, num2, resultado);
	}

	return 0;
}
