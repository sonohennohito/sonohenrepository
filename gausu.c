#include <stdio.h>
#include <math.h>

int main() {
	int a, d, n;
	(void)scanf_s("%d:%d:%d",&a ,&d, &n);
	printf("a = %d d = %d n =%d\n", a, d, n);
	int s = (n/2)*(a*2+n*d-d);
	printf("s = %d\n", s);
	return 0;
}
