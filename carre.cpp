#include "carre.h"

Carre::Carre(int x, int y, int cote) : Rectangle(x, y) {
	struct Coordonnee coord;
	coord.x = 0;
	coord.y = 0;
	this->cote = cote;
}

Carre::~Carre() {

}

int Carre::get_cote() const {
	return cote;
}

void Carre::set_cote(int cote) {
	this->cote = cote;
}

double Carre::aire() {
	return cote * cote;
}

void Carre::afficher(ostream& s) {
	Coordonnee coord = getAncrage();
	s << "Carre (x=" << coord.x << ", y=" << coord.y << ", c=" << cote << ", aire=" << aire() << ")" << endl;
}

