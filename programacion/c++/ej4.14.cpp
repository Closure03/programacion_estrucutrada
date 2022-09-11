#include<stdio.h>
#include<stdlib.h>

int main() {
	int numCta;
	float saldo;
	float nSaldo;
	float limite;
	float credito;
	float cargos;

	printf("Num de Cta: (-1 para salir): ");
	scanf ("%d", &numCta);
	while (numCta != -1) {
		printf("Saldo Inicial: ");
		scanf("%f", &saldo);
		printf("Total de Cargos: ");
		scanf("%f", &cargos);
		printf("Total de Creditos: ");
		scanf("%f", &credito);
		printf("Limite de Credito: ");
		scanf("%f", &limite);
		nSaldo = saldo + credito;
		if (nSaldo > limite) {
			printf("Num de Cuenta: %d\n", numCta);
			printf("Limite de Credito: %.3f\n", limite);
			printf("Nuevo saldo: %.3f\n", nSaldo);
			printf("Limite de Credito Excedido\n");
		}
		printf("Num de Cta: (-1 para salir): ");
		scanf ("%d", &numCta);
	}
}
