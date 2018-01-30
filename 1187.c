// gcc name.c -o prog -W -Wall -Wshadow -pedantic

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 12

int main() {
	int coluna = 0;
	char operacao;
	double resultado = 0;
	double M[N][N];

	scanf("%c\n", &operacao);

	int i, j;
	for (i = 0; i < N; ++i) {
		for (j = 0; j < N; ++j) {
			// printf("Elemento da matriz\n");
			scanf("%lf", &M[i][j]);
		}
	}

	// Soma os elementos abaixo da diagonal secundária
	int diagonal_secundaria = N - 1;
	int diagonal_primaria = 0;

	for (i = 0; i < N/2; ++i) {
		for (j = 0; j < N; ++j)
		{
			if (j < diagonal_secundaria && j > diagonal_primaria) {
				resultado += M[i][j];
			}
		}

		diagonal_secundaria --;
		diagonal_primaria ++;
	}

	if (operacao == 'M') {
		int quantidade_elementos_superior_diagonal = ((N*N) - N) / 2;
		int numero_elementos = (quantidade_elementos_superior_diagonal - N/2) / 2;

		resultado /= numero_elementos;
	}

	printf("%.1lf\n", resultado);

	return 0;
}
