#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony stacky("Stacky", "Jumping");

	stacky.Pony::Action();
}

void	ponyOnTheHeap()
{
		Pony *heapy = new Pony("Heapy", "Sleeping");
		heapy->Pony::Alive();
		heapy->Pony::Action();
		delete heapy;
		heapy = NULL;
		std::cout << "Heapy" << " is dead! \n";
}

int main () 
{
	Pony heapy;

	std::cout << "Create Pony on the Stack." << '\n';
	ponyOnTheStack();
	std::cout << "Pony died when leaving the function as it was on the stack." << '\n';
	std::cout << "Create Pony on the Heap." << '\n';
	ponyOnTheHeap();
	heapy.Pony::Alive();
	std::cout << "Magic..previous pony Heapy initialised as Newpony is still alive!";

  return 0;
}
