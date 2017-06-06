#include <iostream> //including library

int main() //main function
{
	int i, k; //interger variable i and k
	int * j; //declared pointer. pointing to an interger 
	int a = 420, b = 840; // interger variables a and b. a equals 420 and b equals 840
	int * c, * d; //declared pointers. pointing to an interger

	i = 5; //i equals 5
	std::cout << "I = " << i << std::endl; //print i
	std::cout << std::endl; //new line

	k = 25; //k equals 25
	std::cout << "K = " << k << std::endl; //print k
	std::cout << std::endl; //new line

	j = &i; //j equals the address of variable i
	std::cout << "*J = " << *j << std::endl; //prints value pointed to by j
	std::cout << "J = " << j << std::endl; //prints address
	std::cout << std::endl; //new line

	*j = 15; //value pointed to by j equals 15
	std::cout << "*J = " << *j << std::endl; //prints value pointed to by j
	std::cout << "J = " << j << std::endl; //prints address
	std::cout << std::endl; //new line

	j = &k; //j equals the address of variable k
	std::cout << "*J = " << *j << std::endl; //prints value pointed to by j
	std::cout << "J = " << j << std::endl; //prints address
	std::cout << std::endl; //new line

	*j = 45; //value pointed to by j equals 45
	std::cout << "*J = " << *j << std::endl; //prints value pointed to by j
	std::cout << "J = " << j << std::endl; //prints address
	std::cout << std::endl; //new line

	std::cout << "A = " << a << std::endl; //prints a
	std::cout << "B = " << b << std::endl; //prints b
	std::cout << std::endl; //new line

	c = &a; //c equals the address of variable a
	d = &b; //d equals the address of variable b

	*c = 640; //value pointed to by c equals 640
	*d = *c; //value pointed to by d equals value pointed to by c
	c = d; //c equals d. value of pointer is copied.
	*c = 950; //value pointed to by c equals 950 

	std::cout << "A = " << a << std::endl; //prints a
	std::cout << "B = " << b << std::endl; //prints b
	std::cout << std::endl; //new line

	system("pause"); //pauses promt to view output
	return 0; //required by main function (due to data type)
}