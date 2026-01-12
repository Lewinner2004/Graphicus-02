/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Déclaration de la classe pour une couche dans un
 *    canevas. La classe Couche gère un vecteur de pointeurs de formes
 *    géométriques en accord avec les spécifications de Graphicus.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H

#include "vecteur.h"

class Couche {
public:
	Couche();
	~Couche();
	bool ajouter(Forme* forme);
	Forme* retirer(int index);
	Forme* get_forme(int index);
	double aire_totale();
	bool translation(int dX, int dY);
	bool reinitialiser();
	bool changer_etat(int nouvel_etat);
	int get_etat();
	void afficher(ostream& s);

private:
	Vecteur vecteur;
	int etat; /*** 0=initialisé, 1=active, 2=inactive ***/ 
};

#endif

