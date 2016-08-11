#include <iostream>

class animal
{
public:
	virtual void walk() = 0;
};

class Dog : public animal
{
public:
	virtual void yell() {
		std::cout << "bark" << std::endl;
	}
};

class Cat : public animal
{
public:
	virtual void yell() {
		std::cout << "meow" << std::endl;
	}
};

class Beagal : public Dog
{
public:
	void walk() override {
		std::cout << "walking here..." << std::endl;
	}

	/*void yell() override {
		std::cout << "beagal" << std::endl;
	}*/
};

class Persian : public Cat
{
public:
	void walk() override {
		std::cout << "walking here..." << std::endl;
	}

	/*void yell() override {
		std::cout << "persian" << std::endl;
	}*/
};

int main()
{
	Beagal b;
	Persian p;

	b.walk();
	b.yell();

	p.walk();
	p.yell();

	system("pause");
	return 0;
}