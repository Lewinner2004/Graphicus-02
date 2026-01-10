#include "rectangle.h"


Rectangle::Rectangle(int x, int y, int largeur, int hauteur) : Forme(x, y) {
	struct Coordonnee coord;
	coord.x = 0;
	coord.y = 0;
	this->largeur = largeur;
	this->hauteur = hauteur;
}

Rectangle::~Rectangle() {

}

int Rectangle::get_hauteur() const {
	return hauteur;
}

int Rectangle::get_largeur() const {
	return largeur;
}

double Rectangle::aire() {
	return hauteur * largeur;
}

void Rectangle::set_hauteur(int hauteur) {
	this->hauteur = hauteur;
}

void Rectangle::set_largeur(int largeur) {
	this->largeur = largeur;
}

void Rectangle::afficher(ostream& s) {
	s << "Hauteur: " << hauteur << endl;
	s << "Largeur: " << largeur << endl;
	Coordonnee coord = getAncrage();
	s << "Point d'encrage: (" << coord.x << ", " << coord.y << ")" << endl;
}

