#include<stdio.h>
#include<stdlib.h>
int main() {
	float a, b, c,d,e;
	float sum;
	printf("total miles drive per day \n");
	scanf_s("%f", &a);
	printf("cosr per gallon of gasoline \n");
	scanf_s("%f", &b);
	printf("average miles per gallon \n");
	scanf_s("%f", &c);
	printf("parking fees per day \n");
	scanf_s("%f", &d);
	printf("tolls per day \n");
	scanf_s("%f", &e);
	sum = (a / c)*b + d + e;
	printf("the cost of driving to whole day is %.2f dollars \n", sum);
	system("pause");
	return 0;
}