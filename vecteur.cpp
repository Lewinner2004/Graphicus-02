#include "vecteur.h"

Vecteur::Vecteur() {
	taille = 0;
	capacite = 1;
	tableau = new Forme * [capacite];
}

Vecteur::~Vecteur() {
	delete[] tableau;
}

double Vecteur::aire() {
	return 0;
}

int Vecteur::get_capacite() {
	return capacite;
}

int Vecteur::get_taille() {
	return taille;
}

void Vecteur::inc_capacite() {
	this->capacite++;
}

void Vecteur::inc_taille() {
	this->taille++;
}

void Vecteur::doubler() {
	Forme** tableau_temp;
	tableau_temp = new Forme * [capacite];
	for (int i = 0; i < taille; i++) {
		tableau_temp[i] = tableau[i];
	}
	delete[] tableau;
	capacite *= 2;
	tableau = new Forme * [capacite];
	for (int i = 0; i < taille; i++) {
		tableau[i] = tableau_temp[i];
	}
	delete[] tableau_temp;
}

void Vecteur::effacer() {
	delete[] tableau;
	capacite = 1;
	taille = 0;
	tableau = new Forme * [capacite];
}

bool Vecteur::est_vide() {
	if (taille == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool Vecteur::ajouter(Forme* figure) {
	if (taille == capacite) {
		doubler();
	}
	tableau[taille] = figure;
	inc_taille();
	if (taille > capacite) {
		return false;
	}
	return true;
}

Forme* Vecteur::retirer(int index) {
	if (index < 0 || index >= taille) {
		return nullptr;
	}
	Forme* forme = tableau[index];
	for (int i = index; i < (taille - 1); i++) {
		tableau[i] = tableau[i + 1];
	}
	taille--;
	return forme;
}

Forme* Vecteur::get_forme(int index) {
	if (index < 0 || index >= taille) {
		return nullptr;
	}
	Forme* forme = tableau[index];
	return forme;
}

void Vecteur::afficher(ostream& s) {
	for (int i = 0; i < taille; i++) {
		tableau[i]->afficher(s);
	}
}


