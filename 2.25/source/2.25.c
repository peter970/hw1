#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j;
	for (i = 0;i < 5;i++) {
		for (j = 0;j < 9;j++) {
			if (i == 0)
				printf("p");
			else if (i ==1||i==2||i==3 ) {
				if (j == 4 || j == 8){
					printf("p");
				}
				else
					printf(" ");
			}
			else if (i == 4) {
				if (j == 5 || j == 7)
					printf("p");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0;i < 5;i++) {
		for (j = 0;j < 9;j++) {
			if (i == 0) {
				if (j == 2 || j == 3)
					printf("J");
				else
					printf(" ");
			}
			else if (i == 1 || i == 3) {
				if (j == 1)
					printf("J");
				else
					printf(" ");
			}
			else if (i == 2) {
				if (j == 0)
					printf("J");
				else
					printf(" ");
			}
			else if (i == 4) {
				if (j > 1)
					printf("J");
				else
					printf(" ");
			}
				
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0;i < 5;i++) {
		for (j = 0;j < 9;j++) {
			if (i == 0)
				printf("D");
			if (i == 1 || i == 2) {
				if (j == 0 || j == 8)
					printf("D");
				else
					printf(" ");
			}
			else if (i == 3) {
				if (j == 1 || j == 7)
					printf("D");
				else
					printf(" ");
			}
			else if (i == 4) {
				if (j > 1 && j < 7)
					printf("D");
				else
					printf(" ");
			}

		}
		printf("\n");
	}
	system("pause");
	return 0;
}