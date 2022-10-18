#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>
//int main()
//{
//	system("chcp 1251>nul");
//	/*mass();*/
//	Treug_matr();
//
//
//	return 0;
//}
//
//int mass() 
//{
//
//	printf("Введите длину:\n");
//	int r = 0;
//	scanf_s("%d", &r);
//	int* mass = calloc(r, sizeof(int));//Calloc - выделение памяти; r - длина массива; sizeof выделение памяи на 1 элемент
//	for (int i = 0; i < r; i++)//Заполнение
//	{
//		*(mass + i) = i;//Заполнение массива значением i
//	}
//	for (int i = 0; i < r; i++)
//	{
//		printf(" %d ", *(mass + i));
//	}
//	
//}
//int* f(int chislo) 
//{
//	
//
//}
//
//int* func(int (*f)(int chislo), int* first, int* l);
//
//
//
//int Treug_matr()
//{
//	int p = 0;
//	printf("Введите размерность массива: ");
//	int n;
//	scanf_s("%d", &n);
//
//	int** pp = malloc(n * sizeof(int));
//
//	for (int i = n; i >= 0; i--)
//	{
//		pp[i] = malloc((i + 1) * sizeof(int));
//
//		for (int j = 0; j <= i; j++)
//		{
//			pp[i][j] = p;
//			p++;
//
//		}
//		p = 0;
//	}
//
//	for (int i = n; i >= 0; i--)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" %d", pp[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}