#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j;
	for (i = 0;i<5;i++) {
		for (j = 4;j>i;j--) {
			printf(" ");
		}
		for (j = 0;j <= i;j++) {
			printf("* ");
		}
		
		printf("\n");
	}
	
	printf("\n");
	printf("    *    \n");
	printf("   * *   \n");
	printf("  * * *  \n");
	printf(" * * * * \n");
	printf("* * * * *\n");
	system("pause");
	return 0;
}