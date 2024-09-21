#include <stdio.h>
#include <math.h>
// sub rotina é igual a um mini programa definido fora do código e chamado dentro do código, para nao ter que escrever varias vezes o mesmo trecho.

//ordem: tipo de saída, nome da rotina (tipo de entrada)
int num_p_ou_n (float num);

int main()
{
	float num; 

	printf("Entre com o numero: \no programa vai encerrar caso o numero for negativo e reiniciar caso seja positivo\n");
	scanf("%f", &num);

	num_p_ou_n (num);
}

int num_p_ou_n (float num)
{
	if(num >= 0)
	{
		printf("O %.2f corresponde a um numero positivo", num);
		return 1;
	}
	else
	{
		printf("O %.2f corresponde a um numero negativo", num);
		return 0;
	}
}
