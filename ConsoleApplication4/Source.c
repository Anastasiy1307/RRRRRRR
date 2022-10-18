#include <stdio.h>
#include <malloc.h>

int Kub(int a)
{
	return a * a * a;
}

int Ost(int a)
{
	return a % 2;
}
int(*f[2])(int);
int* func(int(*f)(int), int* a, int* n)
{
	for (int i = 0; i < n; i++)
	{
		*a = f(i);
		printf("%d ", *a);
		a++;
	}
	return a;
}


int Treygol(int** a, int r)
{
	int** a1 = a;
	int* b;
	for (size_t b = 0; b < r; b++)
	{

		for (size_t i = 0; i < r / 2; i++)
		{
			*a = calloc((i + 1), sizeof(int));
			b = *a;
			for (int j = 0; j < i; j++)
			{
				**a = j;
				(*a)++;
			}
			*a = b;
			a++;
		}

		for (size_t i = r / 2; i > 0; i--)
		{
			*a = calloc((i + 1), sizeof(int));
			b = *a;
			for (int j = 0; j < i; j++)
			{
				**a = j;
				(*a)++;
			}
			*a = b;
			a++;
		}
		a = a1;
	}

	for (size_t b = 0; b < r; b++)
	{

		for (size_t i = 0; i < r / 2; i++)
		{

			b = *a;
			for (int j = 0; j < i; j++)
			{
				printf("%d ", **a);
				(*a)++;
			}
			printf("\n");
			*a = b;
			a++;

		}

		for (size_t i = r / 2; i > 0; i--)
		{

			b = *a;
			for (int j = 0; j < i; j++)
			{
				printf("%d ", **a);
				(*a)++;
			}
			printf("\n");
			*a = b;
			a++;
		}
		a = a1;
	}

}

struct list
{
	int a;
	struct list* next;
};

typedef struct list* Los;
Los create(int n)
{
	Los los = calloc(1, sizeof(struct list));
	Los p1 = los;
	Los p2;
	p1->a = 0;
	for (size_t i = 0; i < n; i++)
	{
		p2 = calloc(1, sizeof(struct list));
		p1->next = p2;
		p2->a = p1->a + 1;
		p1 = p2;
	}
	p1->next = NULL;
	return los;
}

void Show(Los los)
{
	while (los)
	{
		printf("%d ", los->a);
		los = los->next;
	}
	printf("\n");
}


void DeletItem(Los los, Los b)
{

	struct list* tmp = NULL;
	struct list* hmp = NULL;
	while (los->a != b && los->next)
	{
		los = los->next;
	}
	tmp = los->next;
	hmp = tmp->next;
	free(tmp);
	los->next = hmp;

}
void Delet(Los los)
{
	Los i;
	while (los)
	{
		i = los->next;
		free(los);
		los = i;
	}
}

main()
{
	system("chcp 1251>nul");
	printf("Вариант 2\n");
	int s;
	printf("Выберите вариант задания: \n 1 задание \n 2 задание \n 3 задание \n");
	scanf_s("%d", &s);
	switch (s)
	{
	case 1:
	{
		printf("Задание 1\n");
		int n;
		printf("Введите размер массива ");
		scanf_s("%d", &n);
		int* a = calloc(n, sizeof(int));
		f[0] = Kub;
		f[1] = Ost;

		func(f[0], a, n);
		printf("\n");
		func(f[1], a, n);
	}
	break;
	case 2:
	{
		printf("Задание 2\n");
		int n;
		printf("Введите размер массива ");
		scanf_s("%d", &n);
		int** a = calloc(n, sizeof(int));
		Treygol(a, n);
	}
	break;
	case 3:
	{
		printf("Задание 3\n");
		int n;
		printf("Введите размер списка ");
		scanf_s("%d", &n);
		Los los = create(n);

		printf("\nВывод списка ");
		Show(los);

		printf("\nУдаление элемента по его значению ");
		DeletItem(los, 3);
		Show(los);
		system("pause");
		printf("\nУдаление всего списка ");
		Delet(los);
	}
	break;
	default:
		printf("\nДосвидание");
		break;
	}



	return 0;
}
