#include <iostream>

template<typename T>
class vector {
public:
	T x, y, z;

	void print()
	{
		std::cout << x << " " << y << " " << z << std::endl;
	}

	vector()
	{
		x, y, z = 0;
	}

	vector(T a, T b)
	{
		x = a;
		y = b;
	}

	vector(T a, T b, T c)
	{
		x = a;
		y = b;
		z = c;
	}

	vector operator+(vector other)
	{
		vector temp(0, 0);
		temp.x = x + other.x;
		temp.y = y + other.y;
		temp.z = z + other.z;
		return temp;
	}

	vector operator-(vector other)
	{
		vector temp(0, 0);
		temp.x = x - other.x;
		temp.y = x - other.y;
		temp.z = z - other.z;
		return temp;
	}
};