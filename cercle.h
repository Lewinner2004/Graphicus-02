//ALEXIS DELISLE (DELA8776), MAXIM TREMBLAY (TREM4095)
#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"

class Cercle : public Forme {
public:
	Cercle(int x = 0, int y = 0, int rayon = 1);
	~Cercle();
	double aire();
	void afficher(ostream& s);
	int get_rayon() const;
	void set_rayon(int rayon);

private:
	int rayon = 1;
};

#endif

