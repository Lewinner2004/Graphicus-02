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
	etat = 0;
	vecteur = new Vecteur();
}

Couche::~Couche() {

}

bool Couche::ajouter(Forme* forme) {
	if (etat != 1) {
		return false;
	}
	vecteur->ajouter(forme);
	int taille = vecteur->get_taille();
	return true;
}

Forme* Couche::retirer(int index) {
	if (etat != 1) {
		return nullptr;
	}
	Forme* forme = vecteur->get_forme(index);
	vecteur->retirer(index);
	return forme;
}

Forme* Couche::get_forme(int index) {
	if (etat != 1) {
		return nullptr;
	}
	Forme* forme = vecteur->get_forme(index);
	return forme;
}

double Couche::aire_totale() {
	if (etat != 1) {
		return -1;
	}
	double aire_couche = 0;
	Forme* forme;
	for (int i = 0; i < vecteur->get_taille(); i++) {
		forme = vecteur->get_forme(i);
		aire_couche += forme->aire();
	}
	return aire_couche;
}

bool Couche::translater_tout(struct Coordonnee coord) {
	if (etat != 1) {
		return false;
	}
	Forme* forme;
	for (int i = 0; i < vecteur->get_taille(); i++) {
		forme = vecteur->get_forme(i);
		forme->setAncrage(coord);
	}
	return true;
}

bool Couche::reinitialiser() {
	if (vecteur->est_vide() == true) {
		return false;
	}
	vecteur->effacer();
	return true;
}

bool Couche::changer_etat(int nouvel_etat) {
	if (etat == nouvel_etat) {
		return false;
	}
	etat = nouvel_etat;
	return true;
}

int Couche::get_etat() {
	return etat;
}





