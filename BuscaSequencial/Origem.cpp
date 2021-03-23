#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define VETOR 10
int BuscaSequencial(int vetor[], int busc);

int main() {

	setlocale(LC_ALL, "portuguese");   //uso de acentuação na main.
	int vet[VETOR] = { 0 };
	int busc, achou;
	srand(time(NULL)); // gera semente aleatoria.
	//inserção de dados.

	for (int i = 0; i < VETOR; i++)
	{
		vet[i] = rand() % 1000; //gera valores entre 0 a 99.
	}
	printf("VETOR GERADO:\n");
	for (int i = 0; i < VETOR; i++)
	{
		printf("%d \n", vet[i]);
	}

	printf("Selecione um valor para buscar: \n");
	scanf_s("%i", &busc);

	achou = BuscaSequencial(vet, busc);
	if (achou == -1)
		printf("Valor não encontrado. \n");
	else
		printf("Valor encontrado na posição %d. \n", achou);


	system("pause");
	return 0;
}

int BuscaSequencial(int vet[], int busc)
{
	int achou, i;
	achou = 0;
	i = 0;
	while ((i <= VETOR) && (achou == 0))
	{
		if (vet[i] == busc)
			achou = 1;
		else
			i++;
	}
	if (achou == 0)
		return -1;
	else
		return i + 1;
}