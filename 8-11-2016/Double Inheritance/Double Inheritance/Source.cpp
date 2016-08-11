#include <iostream> //including a library

class animal //this class has a pure virtual function. this class is inherited by class Dog and Cat
{
public: //everything under this is labeled public.
	virtual void walk() = 0; //this is a pure virtual function. it is set equal to zero.
};

class Dog : public animal //this class inherites from class animal
{
public: //everything under this is labeled public.
	virtual void yell() { //this is a virtual function.
		std::cout << "bark" << std::endl; //just printing something to the screen.
	}

	virtual void jump() { //this is a virtual function.
		std::cout << "dog jump" << std::endl; //just printing something to the screen.
	}
};

class Cat : public animal //this class inherites from class animal
{
public: //everything under this is labeled public.
	virtual void yell() { //this is a virtual function.
		std::cout << "meow" << std::endl; //just printing something to the screen.
	}

	virtual void jump() { //this is a virtual function.
		std::cout << "cat jump" << std::endl; //just printing something to the screen.
	}
};

class Beagal : public Dog //this class inherites from class Dog (which is inheriting from class animal)
{
public: //everything under this is labeled public.
	void walk() override { //this will override what is stored in walk(). walk() will no longer equal zero.
		std::cout << "dog walking here..." << std::endl; //just printing something to the screen.
	}

	/*void yell() override { //this will override what is stored in yell(). yell() will no longer print "bark".
		std::cout << "beagal" << std::endl; //just printing something to the screen.
	}*/

	void jump() override { //this will override what is stored in jump(). jump() will no longer print "dog jump".
		std::cout << "beagal jumper" << std::endl; //just printing something to the screen.
	}
};

class Persian : public Cat //this class inherites from class Cat (which is inheriting from class animal)
{
public: //everything under this is labeled public.
	void walk() override { //this will override what is stored in walk(). walk() will no longer equal zero.
		std::cout << "cat walking here..." << std::endl; //just printing something to the screen.
	}

	/*void yell() override { //this will override what is stored in yell(). yell() will no longer print "meow".
		std::cout << "persian" << std::endl; //just printing something to the screen.
	}*/

	void jump() override { //this will override what is stored in jump(). jump() will no longer print "cat jump".
		std::cout << "persian jumper" << std::endl; //just printing something to the screen.
	}
};

int main() //main function
{
	Beagal b; //beagal object
	Persian p; //persian object

	b.walk(); //calling walk() pure virtual function
	b.yell(); //calling yell() virtual function
	b.jump(); //calling jump() virtual function

	p.walk(); //calling walk() pure virtual function
	p.yell(); //calling yell() virtual function
	p.jump(); //calling jump() virtual function

	system("pause"); //freezes prompt to view output.
	return 0; //required for main function (since it has a data type of int).
}