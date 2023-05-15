#include <stdio.h>

int main() {
	int *pint;
	float a;
	char c;
	double *pd;
	a = *pint;
	c = *pd;
	*pint = *pd;
//	pd = a;         //sai vi pd la con tro nhung gan bang bien
	return 0;
}

