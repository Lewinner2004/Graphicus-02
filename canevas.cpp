/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Implémentation des méthodes des classes décrites dans
 *    canevas.h.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas() {
	for (int i = 0; i < MAX_COUCHES; i++) {
		couches[i] = new Couche();
	}
	couches[0]->changer_etat(1);
}

	Canevas::~Canevas() {

}

int Canevas::get_etat_actif() {
	int index;
	for (int i = 0; i < MAX_COUCHES; i++) {
		if (couches[i]->get_etat() == 1) {
			index = i;
		}
	}
	return index;
}

bool Canevas::reinitialiser() {
	bool aucune_erreur;
	int nbr_couches_vides = 0;
	for (int i = 0; i < MAX_COUCHES; i++) {
		aucune_erreur = couches[i]->reinitialiser();
		if (aucune_erreur == false) {
			nbr_couches_vides++;
		}
	}
	if (nbr_couches_vides == MAX_COUCHES) {
		return false;
	}
	return true;
}

bool Canevas::reinitialiserCouche(int index) {
	bool aucune_erreur;
	bool aucune_erreur2;
	aucune_erreur = couches[index]->reinitialiser();
	if (couches[index]->get_etat() == 1) {
		return aucune_erreur;
	}

	aucune_erreur2 = couches[index]->changer_etat(0);
	if (aucune_erreur == false || aucune_erreur2 == false) {
		return false;
	}
	return true;
}

bool Canevas::activerCouche(int index) {
	bool aucune_erreur;
	bool aucune_erreur2;
	int couche_active;
	for (int i = 0; i < MAX_COUCHES; i++) {
		if (couches[i]->get_etat() == 1) {
			aucune_erreur = couches[i]->changer_etat(2);
			couche_active = i;
		}
		aucune_erreur2 = couches[index]->changer_etat(1);
	}
	if (couche_active == index) {
		return false;
	}
	if (aucune_erreur == false || aucune_erreur2 == false) {
		return false;
	}
	return true;
}

bool Canevas::desactiverCouche(int index) {
	bool aucune_erreur;
	bool aucune_erreur2;
	if (couches[index]->get_etat() != 1) {
		return false;
	}
	aucune_erreur = couches[index]->changer_etat(2);
	aucune_erreur2 = couches[0]->changer_etat(1);
	if (aucune_erreur == false || aucune_erreur2 == false) {
		return false;
	}
	return true;
}

bool Canevas::ajouterForme(Forme* p_forme) {
	bool aucune_erreur = couches[get_etat_actif()]->ajouter(p_forme);
	return aucune_erreur;
}

bool Canevas::retirerForme(int index) {
	bool aucune_erreur = couches[get_etat_actif()]->retirer(index);
	return aucune_erreur;
}

double Canevas::aire() {
	double aire_totale = 0;
	for (int i = 0; i < MAX_COUCHES; i++) {
		aire_totale += couches[i]->aire_totale();
	}
	return aire_totale;
}

bool Canevas::translater(int deltaX, int deltaY) {
	couches[get_etat_actif()]->translater(deltaX, deltaY);
	return true;
}

void Canevas::afficher(ostream& s) {
	Forme* forme;
	int taille;
	for (int i = 0; i < MAX_COUCHES; i++) {
		taille = couches[i]->get_taille();
		s << "---- Couche " << i << " ----" << endl;
		if (couches[i]->get_etat() == 0) {
			s << "Etat: initialisee" << endl;
		}
		else if (couches[i]->get_etat() == 1) {
			s << "Etat: active" << endl;
		}
		else {
			s << "Etat: inactive" << endl;
		}
		if (couches[i]->est_vide() == true) {
			s << "Couche: vide" << endl;
		}
		for (int j = 0; j < taille; j++) {
			forme = couches[i]->get_forme(j);
			forme->afficher(s);
		}
	}
}
