//ALEXIS DELISLE (DELA8776), MAXIM TREMBLAY (TREM4095)
#ifndef CARRE_H
#define CARRE_H

#include "rectangle.h"

class Carre : public Forme {
public:
	Carre(int x = 0, int y = 0, int cote = 1);
	~Carre();
	double aire();
	void afficher(ostream& s);
	int get_cote();
	void set_cote(int cote);
private:
	int cote = 1;
};

#endif



