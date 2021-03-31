#include <random>
#include <iostream>

std::mt19937		f_rand(time(0));

class Base {

public:
	virtual ~Base(void) {}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void){
	std::string s = "ABC";
	char c = s[(f_rand()%3)];

	switch (c)
	{
		case 'A':
			std::cout << "New A created \n";
			return (new A());
		case 'B':
			std::cout << "New B created \n";
			return (new B());
		case 'C':
			std::cout << "New C created \n";
			return (new C());
	}
	return 0;
}

void identify_from_pointer(Base * p)
{
	A	*typeA = dynamic_cast<A *>(p);
	if (typeA != NULL)
		std::cout << "A" << '\n';
	B	*typeB = dynamic_cast<B *>(p);
	if (typeB != NULL)
		std::cout << "B" << '\n';
	C	*typeC = dynamic_cast<C *>(p);
	if (typeC != NULL)
		std::cout << "C" << '\n';
}

void identify_from_reference( Base & p)
{
	A	*typeA = dynamic_cast<A *>(&p);
	if (typeA != NULL)
		std::cout << "A" << '\n';
	B	*typeB = dynamic_cast<B *>(&p);
	if (typeB != NULL)
		std::cout << "B" << '\n';
	C	*typeC = dynamic_cast<C *>(&p);
	if (typeC != NULL)
		std::cout << "C" << '\n';
}

int main()
{
	std::cout << "Base Type A \n";
	Base 	*test0 = new(A);
		identify_from_pointer(test0);
		identify_from_reference(*test0);
		delete test0;

	Base	*test1 = generate();
		identify_from_pointer(test1);
		identify_from_reference(*test1);
		delete test1;
	Base	*test2 = generate();
		identify_from_pointer(test2);
		identify_from_reference(*test2);
		delete test2;
	Base	*test3 = generate();
		identify_from_pointer(test3);
		identify_from_reference(*test3);
		delete test3;
	Base	*test4 = generate();
		identify_from_pointer(test4);
		identify_from_reference(*test4);
		delete test4;
}