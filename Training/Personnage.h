#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include "Arme.h"

class Personnage
{
    public:

	Personnage(); //Constructeur
	Personnage(std::string nomArme, int degatsArme);
	~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
	void afficherEtat() const;

    private:

    int m_vie;
    int m_mana;
    //std::string m_nomArme; //Pas de using namespace std, il faut donc mettrestd:: devant string
    //int m_degatsArme;
	Arme m_arme; //Notre Personnage possède une Arme
};

#endif