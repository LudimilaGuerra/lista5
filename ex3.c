#include <stdio.h>
#include <math.h>

/*define a função "soma entre numeros" que recebe num1 e num2 como parametros e retorna a soma dos numeros inteiros que estao entre esses dois numeros*/
int somaEntreNumeros(int b, int c, int divisor)
{
	if (b <= 0 || c <= 0 || divisor <= 0)
  	{
		printf("\nOs Numeros devem ser Positivos!!!\n");
		return 0; //Valor Invalido
	}
/*verifica se algum dos numeros fornecidos é menor ou igual a zero. se alguma dessas condições forem verdadeiras, entao a soma nao acontece.*/

	int soma = 0;
//declara uma variavel soma que sera usada para armazenar o valor acumulado da soma dos numeros entre b e c
	int inicio = (b < c) ? b : c; //Ternario
	int fim = (b < c) ? c : b; //Ternario
//utiliza o operador para determinar qual dos numeros é menor (inicio) e qual é maior (final)

	for (int i = inicio + 1; i < fim; i ++)
  	{
		if(i % divisor == 0)
		{
			soma += i; // soma apenas se for divisivel 
		}
	}
/*Inicia um loop for que percorre os números entre inicio (o menor número) e fim (o maior número), começando de inicio + 1 e terminando antes de fim. A cada iteração, o valor de i é adicionado à variável soma.
*/
	return soma;
}

int main()
{
	int b, c, divisor;
	int resultado;
	
	printf("Digite o primeiro numero, esse tambem sera o divisor, deve ser maior que 0: \n");
	fflush(stdout);
	scanf("%d", &divisor);

	printf("Agora, digite o primeiro numero inteiro: \n");
	fflush(stdout);
	scanf("%d", &b);

	printf("Agora, digite o segundo numero inteiro: \n");
	fflush(stdout);
	scanf("%d", &c);

	resultado = somaEntreNumeros(b, c, divisor);

	// Exibe o resultado, se for válido
    	if (resultado > 0)
    	{
        	printf("\nA Soma dos Números divisíveis por %d entre %d e %d é: %d\n", divisor, b, c, resultado);
    	}

    	return 0;
}

