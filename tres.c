#include <stdio.h>

#define SIZE 4

void update_value(int *pointer, int value) {
	(*pointer) = value;
}

int main() {
	int arr[SIZE];

	for(int i = 0; i < SIZE; i++) {
		/* arr[i] = i * 2; */
		*(arr + i) = i * 2;
	}

	int *parr = &arr[2];

	printf("arr[2] = %d\n", (*parr));

	update_value(parr, 612);

	/* vai mover "parr" para o próximo endereço na memória de "arr" */
	/* isso acontece porque um array tem seus endereços na memória próximos um do outro */
	/* parr--; */

	printf("arr[2] = %d\n", (*parr));

	return 0;
}
