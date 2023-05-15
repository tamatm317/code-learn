
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *f;
	int d, m, y;
	f = fopen("Ngay.txt", "r");
	if (f == NULL) {
		printf("Loi mo file");
		exit(1);
	}
	fscanf(f, "%d/%d/%d", &d, &m, &y);
	fclose(f);
	printf("%d %d %d\n", d, m, y);
	return 0;
}
