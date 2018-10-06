#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j;
	printf("長方形------------------------------------------------- \n");
	for (i = 0;i < 9;i++) {
		for (j = 0;j < 9;j++) {
			if (i == 0 || i == 8) {
				printf("*");
			}
			else {
				if (j == 0 || j == 8) {
					printf("*");
				}
				else printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("圓形--------------------------------------------------- \n");
	for (i = 0;i < 9;i++) {
		for (j = 0;j < 9;j++) {
			if (i == 0 || i == 8) {
				if (j == 3 || j == 4 || j == 5)
					printf("*");
				else
					printf(" ");
			}
			else if (i == 1 || i == 7) {
				if (j == 1 || j == 7)
					printf("*");
				else
					printf(" ");
			}
			else if (j == 0 || j == 8)
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	printf("傘形--------------------------------------------------- \n");
	for (i = 0;i < 9;i++) {
		for (j = 0;j < 9;j++) {
			if (i == 0) {
				if (j == 4)
					printf("*");
				else
					printf(" ");
			}
			else if (i == 1) {
				if (j == 3 || j == 4 || j == 5)
					printf("*");
				else
					printf(" ");
			}
			else if (i == 2) {
				if (j == 2 || j == 3 || j == 4 || j == 5 || j == 6)
					printf("*");
				else
					printf(" ");

			}
			else if (i > 2) {
				if (j == 4)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("菱形--------------------------------------------------- \n");
	int a = 4,b = 4;
	for (i = 0;i < 9;i++) {
		for (j = 0;j < 9;j++) {
			if (j == a || j == b)
				printf("*");
			else printf(" ");
		}
		if (i < 4) {
			a++;
			b--;
		}
		else {
			a--;
			b++;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}