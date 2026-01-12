#ifndef VECTEUR_H
#define VECTEUR_H

#include "forme.h"

class Vecteur : public Forme {
public:
	Vecteur();
	~Vecteur();
	int get_capacite();
	int get_taille();
	void inc_taille();
	void inc_capacite();
	void effacer();
	bool est_vide();
	bool ajouter(Forme* figure);
	Forme* retirer(int index);
	Forme* get_forme(int index);
	void afficher(ostream& s);

private:
	void doubler();
	double aire();
	int taille = 0;
	int capacite = 1;
	Forme** tableau;
};

#endif
