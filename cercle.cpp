//ALEXIS DELISLE (DELA8776), MAXIM TREMBLAY (TREM4095)
#include "cercle.h"

Cercle::Cercle(int x, int y, int rayon) : Forme(x, y) {
	struct Coordonnee coord;
	coord.x = 0;
	coord.y = 0;
	this->rayon = rayon;
}

Cercle::~Cercle() {

}

double Cercle::aire() {
	return 3.1416 * (rayon * rayon);
}

int Cercle::get_rayon() const {
	return rayon;
}

void Cercle::set_rayon(int rayon) {
	this->rayon = rayon;
}

void Cercle::afficher(ostream& s) {
	Coordonnee coord = getAncrage();
	s << "Cercle (x=" << coord.x << ", y=" << coord.y << ", r=" << rayon << ", aire=" << aire() << ")" << endl;
}



