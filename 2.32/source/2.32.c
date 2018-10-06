#include<stdio.h>
#include<stdlib.h>
int main() {
	float bmi, h, w;
	printf("input your height \n");
	scanf_s("%f", &h);
	printf("input your weight \n");
	scanf_s("%f", &w);
	bmi = w / (h*h);
	printf("bmi = %.2f \n", bmi);
	if (bmi < 18.5)
		printf("underweight\n");
	if (bmi < 24.9&&bmi>=18.5)
		printf("normal\n");
	if (bmi >= 24.9&&bmi<29.9)
		printf("overweight\n");
	if (bmi > 30)
		printf("obese\n");
	system("pause");
	return 0;
}