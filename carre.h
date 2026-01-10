#ifndef CARRE_H
#define CARRE_H

#include "rectangle.h"

class Carre : public Rectangle {
public:
	Carre(int x = 0, int y = 0, int cote = 1);
	~Carre();
	double aire();
	void afficher(ostream& s);
	int get_cote() const;
	void set_cote(int cote);
private:
	int cote = 1;
};

#endif



