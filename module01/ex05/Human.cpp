	#include "Human.hpp"

	Human::Human(){ }

	Human::~Human() { 
		std::cout << "\n Sadly the human has died \n";
	}

	Brain const Human::getBrain() {
		return (this->m_brain);
	}

	std::string		Human::identifier()
	{
		return this->m_brain.identifier(); 
	}