#include "stdlib.h"
#include "time.h"
void Rand(int a[][4], int H, int W)
{
	int k, i, j;
	for (k = 0; k < 2; k++)
	{

		srand(time(NULL));
		i = rand() % (H - 1);
		j = rand() % (W - 1);
		if (a[i][j] == 0)
		{
			a[i][j] = 2;
		}
	}
}

void Move(int a[][4], int x, int y, int d)
{
	switch (d)
	{
	case 1:
	{
					if (a[y + 1][x] == a[y][x])
					{
						a[y][x] = 0;
						a[y + 1][x] *= 2;
					}
					else if (a[y + 1][x] == 0)
					{
						a[y + 1][x] = a[y][x];
						a[y][x] = 0;
					}
					break;
	}
	case 2:
	{
					if (a[y - 1][x] == a[y][x])
					{
						a[y][x] = 0;
						a[y - 1][x] *= 2;
					}
					else if (a[y - 1][x] == 0 && (y - 1) >= 0)
					{
						a[y - 1][x] = a[y][x];
						a[y][x] = 0;
					}
					break;
	}
	case 3:
	{
					if (a[y][x + 1] == a[y][x])
					{
						a[y][x] = 0;
						a[y][x + 1] *= 2;
					}
					else if (a[y][x + 1] == 0)
					{
						a[y][x + 1] = a[y][x];
						a[y][x] = 0;
					}
					break;
	}
	case 4:
	{
					if (a[y][x - 1] == a[y][x])
					{
						a[y][x] = 0;
						a[y][x - 1] *= 2;
					}
					else if (a[y][x - 1] == 0)
					{
						a[y][x - 1] = a[y][x];
						a[y][x] = 0;
					}
					break;
	}
	}
}
