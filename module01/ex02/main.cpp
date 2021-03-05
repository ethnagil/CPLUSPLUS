#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie unknown1("Kinky");
	Zombie unknown2("Linky");
	Zombie *event1;

	ZombieEvent scare;

	std::cout << "2 Zombies created on the stack \n";
	unknown1.advert();
	unknown2.advert();

	std::cout << "A named Zombie created for the SCARY Event \n";
	scare.ZombieEvent::setZombieType("SCARY");
	event1 = scare.ZombieEvent::newZombie("Harry");
	event1->Zombie::advert();

	std::cout << "a random Zombie created for the Event. Random Zombies disintegrate after their announcemant \n";
	scare.ZombieEvent::randomChump();

	delete event1; // Must delete the named Zombies

	while (2) ;

	return 0;
}