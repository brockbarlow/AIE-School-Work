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

	virtual void jump() {
		std::cout << "dog jump" << std::endl;
	}
};

class Cat : public animal
{
public:
	virtual void yell() {
		std::cout << "meow" << std::endl;
	}

	virtual void jump() {
		std::cout << "cat jump" << std::endl;
	}
};

class Beagal : public Dog
{
public:
	void walk() override {
		std::cout << "dog walking here..." << std::endl;
	}

	/*void yell() override {
		std::cout << "beagal" << std::endl;
	}*/

	void jump() override {
		std::cout << "beagal jumper" << std::endl;
	}
};

class Persian : public Cat
{
public:
	void walk() override {
		std::cout << "cat walking here..." << std::endl;
	}

	/*void yell() override {
		std::cout << "persian" << std::endl;
	}*/

	void jump() override {
		std::cout << "persian jumper" << std::endl;
	}
};

int main()
{
	Beagal b;
	Persian p;

	b.walk();
	b.yell();
	b.jump();

	p.walk();
	p.yell();
	p.jump();

	system("pause");
	return 0;
}