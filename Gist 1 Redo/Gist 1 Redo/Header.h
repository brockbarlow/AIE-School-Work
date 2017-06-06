#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiply(int r, int c)
{
	int **matA = 0;
	int **matB = 0;
	int matC[4][4] = { 0 };
	srand(time(NULL));

	matA = new int *[r];
	for (int i = 0; i < r; i++)
	{
		matA[i] = new int[c];
		for (int j = 0; j < c; j++) 
		{
			matA[i][j] = rand() % 10 + 1;
		}
	}

	matB = new int *[r];
	for (int i = 0; i < r; i++)
	{
		matB[i] = new int[c];
		for (int j = 0; j < c; j++) 
		{ 
			matB[i][j] = rand() % 10 + 1;
		}
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			for (int x = 0; x < 4; x++) 
			{ 
				matC[i][j] = matA[i][x] * matB[x][j]; 
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		std::cout << " | ";
		for (int j = 0; j < 4; j++)
		{
			std::cout << matC[i][j] << " | ";
			if (j == 3) 
			{ 
				std::cout << "\n"; 
			}
		}
	}
}