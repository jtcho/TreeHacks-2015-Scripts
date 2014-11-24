#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    printf("Size of unsigned int: %lu\n", sizeof(unsigned int)); //sizeof(uint) -> 4
	if (argc != 2) { printf("Invalid usage. Exiting...\n"); exit(1); }
	if (strlen(argv[1]) != sizeof(unsigned int)) { printf("Invalid length. Exiting...\n"); exit(1); }
	unsigned int val = *(unsigned int *)argv[1];
	if (val == 0x6B30306B) { printf("Yes! The answer is %s.\n", argv[1]); }
	else { printf("Nope! Try again.\n"); }
}
