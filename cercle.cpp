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
	s << "Rayon: " << rayon << endl;
	Coordonnee coord = getAncrage();
	s << "Point d'ancrage: (" << coord.x << ", " << coord.y << ")" << endl;
}



