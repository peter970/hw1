#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b;
	printf("input two intergers \n");
	scanf_s("%d %d", &a, &b);
	if (a%b == 0)
		printf("the first interger is a multiple of the second \n");
	else
		printf("the first interger is not a multiple of the second \n");
	system("pause");
	return 0;
}