#ifndef VECTEUR_H
#define VECTEUR_H

#include "forme.h"

class Vecteur : public Forme {
public:
	Vecteur();
	~Vecteur();
	int get_capacite() const;
	int get_taille() const;
	void inc_taille();
	void inc_capacite();
	void effacer();
	bool est_vide();
	bool ajouter(Forme* figure);
	Forme* retirer(int index);
	Forme* get_forme(int index) const;
	void afficher(ostream& s);

public:
	void doubler();
	double aire();
	int taille = 0;
	int capacite = 1;
	Forme** tableau;
};

#endif
