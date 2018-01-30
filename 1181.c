// gcc name.c -o prog -W -Wall -Wshadow -pedantic

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int N = 12;

int main() {
	int linha = 0;
	char operacao;
	double resultado = 0;
	double M[N][N];

	scanf("%d\n", &linha);
	scanf("%c", &operacao);

	int i, j;
	for (i = 0; i < N; ++i) {
		for (j = 0; j < N; ++j) {
			// printf("Elemento da matriz\n");
			scanf("%lf", &M[i][j]);
		}
	}

	for (i = 0; i < N; ++i) {
		resultado += M[linha][i];
	}

	if (operacao == 'M') {
		resultado /= N;

	}

	printf("%.1lf\n", resultado);

	return 0;
}
