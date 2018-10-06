#include<stdio.h>
#include<stdlib.h>
int main() {
	int i,j,k;
	printf("number\tsquare\tcube\n");
	for (i = 0;i <= 10;i++) {
		j = i * i;
		k = j * i;
		printf("%d\t", i);
		printf("%d\t", j);
		printf("%d\t", k);
		printf("\n");
	}
	system("pause");
	return 0;
}