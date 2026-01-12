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

int Rectangle::get_hauteur() {
	return hauteur;
}

int Rectangle::get_largeur() {
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
	Coordonnee coord = getAncrage();
	s << "Rectangle (x=" << ancrage.x << ", y=" << ancrage.y << ", l=" << largeur << ", h=" << hauteur << ", aire=" << aire() << ")" << endl;
}

