#include <stdio.h>
#include <stdint.h>

int main() {
	int *ptr=NULL;
	ptr = (int *) malloc(sizeof(int));

	uint64_t i;
	while (ptr = (int *) realloc(ptr,i*1000*sizeof(int))) {
		i++;
		printf("Allocating size of %d",i*1000*sizeof(int));
	}
	free(ptr);

	printf("Max size is %d bytes\n",i*1000*sizeof(int));
}
