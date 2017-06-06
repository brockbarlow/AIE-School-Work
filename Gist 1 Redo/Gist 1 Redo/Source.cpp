//Gist 1 Description: Write a program that multiplies two 4x4 matrices and returns one matrix.

#include "Header.h"

void multiply(int, int); 

int rows; 
int cols; 

int main()
{
	std::cout << "Write a program that multiplies two 4x4 matrices and returns one matrix.\n" << std::endl;

	rows = 4;
	cols = 4;
	multiply(rows, cols);

	system("pause");
	return 0;
}