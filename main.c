#include "stdio.h"
#include "stdlib.h"
#include "Source.h"

#define H 4
#define W 4


int main( int argc, char *argv[] )
{
	int a[H][W], i, j, flag = 1;

	for (i = 0; i < H; i++)
	  for (j = 0; j < W; j++)
			a[i][j] = 0;
	Rand(a, H, W);
	while (flag)
	{
		switch (getch())
		{
		case 'w':
		{
							for (i = 0; i < W; i++)
							for (j = 0; j < W; j++)
								Move(a, j, i, 2), Rand(a, H, W);
							break;
		}
		case 's':
		{
							for (i = 0; i < W; i++)
							for (j = 0; j < W; j++)
								Move(a, j, i, 1), Rand(a, H, W);
							break;
		}
		case 'a':
		{
							for (i = 0; i < W; i++)
							for (j = 0; j < W; j++)
								Move(a, j, i, 4), Rand(a, H, W);
							break;
		}
		case 'd':
		{
							for (i = 0; i < W; i++)
							for (j = 0; j < W; j++)
								Move(a, j, i, 4), Rand(a, H, W);
							break;
		}
		case 27:
			flag = 0;
			break;
		}
		for (i = 0; i < H; i++)
		  for (j = 0; j < W; j++)
			{
				if (j == W - 1)
					printf("%d\n", a[i][j]);
				else
					printf("%d ", a[i][j]);
			}
			printf("-------------------\n");
	}
	return 1;
}
