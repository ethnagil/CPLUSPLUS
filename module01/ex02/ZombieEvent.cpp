	#include "ZombieEvent.hpp"

	ZombieEvent::ZombieEvent() { };

	ZombieEvent::~ZombieEvent() { };

	Zombie * ZombieEvent::newZombie(std::string name)
	{
		Zombie *newby = new Zombie(name, this->m_type, "Kill them all !!!!!!!!!!!");
		return newby;
	}

	void	ZombieEvent::setZombieType(std::string type)
	{
		this->m_type = type;
	}

	void	ZombieEvent::randomChump()
	{
		std::string names[] = {"Deady", "Grusome", "Headless", "Skeleton", "Scream"};

		Zombie *ptr_randy;

		srand(time(NULL));
		int choice = rand() % 5;
		ptr_randy = ZombieEvent::newZombie(names[choice]);
		ZombieEvent::announce(ptr_randy);
	}

	void	ZombieEvent::announce(Zombie *name)
	{
		std::cout << "Here is a random Zombie...........\n";	
		name->Zombie::advert();
		std::cout << "Now he disintegrates...........\n";
		delete name;
	}