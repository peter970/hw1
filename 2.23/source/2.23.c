#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[3];
	int c = -10000,b = 100000, i;
	printf("input 3 interger \n");
	for (i = 0;i < 3;i++) {
		scanf_s("%d", &a[i]);
		if (a[i] > c)
			c = a[i];
		if (a[i] < b)
			b = a[i];
	}
	printf("the biggest interger %d \n", c);
	printf("the smallest interger %d \n",b);
	system("pause");
	return 0;
}