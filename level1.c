#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	if (argc != 2) { printf("Invalid usage. Exiting...\n"); exit(1); }
	int val;
	if (!sscanf(argv[1], " %d", &val)) { printf("Input must be an integer. Exiting...\n"); exit(1); }
	if (val == 0xDEADBEEF) { printf("Yes! The answer is %s.\n", argv[1]); }
	else { printf("Nope! Try again.\n"); }
}