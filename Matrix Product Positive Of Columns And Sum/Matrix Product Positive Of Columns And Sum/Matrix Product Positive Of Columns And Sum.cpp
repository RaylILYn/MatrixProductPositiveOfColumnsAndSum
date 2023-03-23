#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	float* x;
	int i, j, n, m, proz = 1, sum = 0;
	cout << "Введите количество строк: ";
	cin >> n;
	cout << "Введите количество столбцов: ";
	cin >> m;
	if ((x = (float*)malloc(n * m * sizeof(float))) == NULL)
	{
		puts("нет свободной памяти");
		return;
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			printf("x[%2d][%2d] = ", i, j);
			scanf_s("%f", x + i * m + j);
		}
	printf("\nВведенный массив: ");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < m; j++)
			printf("%5.1f", *(x + i * m + j));

	}
	for (j = 0; j < m; j++)
	{
		proz = 1;
		for (i = 0; i < n; i++)
		{

			if (*(x + i * m + j) > 0)
			{
				proz *= *(x + i * m + j);
			}
		}
		sum += proz;
	}
	cout << endl << endl << "Сумма произведений: " << sum << endl << endl;
	system("pause");
}