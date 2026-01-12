/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Implémentation des méthodes des classes décrites dans
 *    couche.h.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"

Couche::Couche() {
	int etat = 0;
}

Couche::~Couche() {
	reinitialiser();
}

bool Couche::ajouter(Forme* forme) {
	if (etat != 1) {
		return false;
	}
	vecteur.ajouter(forme);
	return true;
}

Forme* Couche::get_forme(int index) {
	if (etat == 0) {
		return nullptr;
	}
	return vecteur.get_forme(index);
}

Forme* Couche::retirer(int index) {
	if (etat != 1) {
		return nullptr;
	}
	Forme* forme = get_forme(index);
	vecteur.retirer(index);
	return forme;
}

double Couche::aire_totale() {
	double aire = 0;
	int taille = vecteur.get_taille();
	for (int i = 0; i < taille; i++) {
		aire += vecteur.get_forme(i)->aire();
	}
	return aire;
}

bool Couche::translation(int dX, int dY) {
	if (etat != 1) {
		return false;
	}
	int taille = vecteur.get_taille();
	for (int i = 0; i < taille; i++) {
		vecteur.get_forme(i)->translater(dX, dY);
	}
	return true;
}

bool Couche::reinitialiser() {
	vecteur.effacer();
	if (aire_totale() != 0) {
		return false;
	}
	return true;
}

int Couche::get_etat() {
	return etat;
}

int Couche::get_taille() {
	taille = vecteur.get_taille();
	return taille;
}

bool Couche::changer_etat(int nouvel_etat) {
	if (nouvel_etat == 0) {
		return false;
	}
	etat = nouvel_etat;
	return true;
}

void Couche::afficher(ostream& s) {
	vecteur.afficher(s);
}