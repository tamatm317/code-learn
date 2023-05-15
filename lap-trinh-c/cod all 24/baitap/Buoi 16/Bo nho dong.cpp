#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, *ptr, sum = 0;
	scanf("%d", &n);
	ptr = (int *)malloc(n * sizeof(int));
//    ptr = (int *)calloc(n, sizeof(int));

	if (ptr == NULL) {
		printf("Co loi! khong the cap phat bo nho.");
		exit(0);
	}
	for (i = 0; i < n; ++i) {
//        scanf("%d", ptr + i);
		scanf("%d", &ptr[i]);
	}
	

	for (i = 0; i < n; ++i) {
//        printf("%d ", *(ptr + i));
		printf("%d ", ptr[i]);
		sum += *(ptr + i);
	}
	printf("\nTong = %d\n", sum);

	int n2;
	scanf("%d",&n2);
	ptr = (int*) realloc(ptr, 3 * sizeof(int));
	
//    realloc(ptr, 0);
	free(ptr);
	return 0;
}

