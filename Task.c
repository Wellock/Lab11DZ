#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define N 10

task();



void main()

{

	system("chcp 1251");

	task();

}


task()
{
	//я 19 варинт
	int A[N];
	float sum = 0;
	float del = 0;

	printf("Программа для подсчета среднего значения положительных элементов массива, состоящего из %i целых чисел, располженных по нечетным индексам\n", N);
	for (int i = 0; i < N; i++)
	{
		printf("A[%i] = ", i);
		scanf("%i", &A[i]);
		if (i % 2 == 0 && A[i] > 0)
		{
			sum += A[i];
			del++;
		}
	}
	printf("Итого среднее значение равно >>> %.2f", sum / del);


}
