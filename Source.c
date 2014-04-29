/* Kobylianskii Dmitrii */
#include "stdlib.h"
#include "time.h"
#include "source.h"

void Rand(Cell a[][4], int H, int W)
{
	int k, i, j;
	for (k = 0; k < 2; k++)
	{

		srand(time(NULL));
		i = rand() % (H - 1);
		j = rand() % (W - 1);
		if (a[i][j].value == 0)
		{
			a[i][j].value = 2;
		}
	}
}

void Move(Cell a[][4], int x, int y, int d)
{
	switch (d)
	{
	case 1:
	{
					if (a[y + 1][x].value == a[y][x].value && a[y][x].move != 1 && (y + 1) <= 0)
					{
						a[y][x].value = 0;
						a[y + 1][x].value *= 2;
						a[y + 1][x].move = 1;
					}
					else if (a[y + 1][x].value == 0 && a[y][x].move != 1 && (y + 1) <= 3)
					{
						a[y + 1][x].value = a[y][x].value;
						a[y][x].value = 0;
						a[y + 1][x].move = 1;
					}
					break;
	}
	case 2:
	{
					if (a[y - 1][x].value == a[y][x].value && a[y][x].move != 1 && (y - 1) >= 0)
					{
						a[y][x].value = 0;
						a[y - 1][x].value *= 2;
						a[y - 1][x].move = 1;
					}
					else if (a[y - 1][x].value == 0 && (y - 1) >= 0 && a[y][x].move != 1)
					{
						a[y - 1][x].value = a[y][x].value;
						a[y][x].value = 0;
						a[y - 1][x].move = 1;
					}
					break;
	}
	case 3:
	{
					if (a[y][x + 1].value == a[y][x].value && a[y][x].move != 1 && (x + 1) <= 3)
					{
						a[y][x].value = 0;
						a[y][x + 1].value *= 2;
						a[y][x + 1].move = 1;
					}
					else if (a[y][x + 1].value == 0 && a[y][x].move != 1 && (x + 1) <= 3)
					{
						a[y][x + 1].value = a[y][x].value;
						a[y][x].value = 0;
						a[y][x + 1].move = 1;
					}
					break;
	}
	case 4:
	{
					if (a[y][x - 1].value == a[y][x].value && a[y][x].move != 1 && (x - 1) >= 0)
					{
						a[y][x].value = 0;
						a[y][x - 1].value *= 2;
						a[y][x - 1].move = 1;
					}
					else if (a[y][x - 1].value == 0 && a[y][x].move != 1 && (x - 1) >= 0)
					{
						a[y][x - 1].value = a[y][x].value;
						a[y][x].value = 0;
						a[y][x - 1].move = 1;
					}
					break;
	}
	}
}
