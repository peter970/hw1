#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	printf("input a interger \n");
	scanf_s("%d", &a);
	if (a % 2 == 1)
		printf("odd \n");
	else
		printf("even \n");
	system("pause");
	return 0;
}