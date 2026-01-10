#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"

class Rectangle : public Forme {
public:
	Rectangle(int x = 0, int y = 0, int hauteur = 1, int largeur = 1);
	~Rectangle();
	double aire();
	void afficher(ostream& s);
	int get_hauteur() const;
	int get_largeur() const;
	void set_hauteur(int hauteur);
	void set_largeur(int largeur);
private:
	int hauteur = 1;
	int largeur = 1;
};

#endif

