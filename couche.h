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

class Couche : public Vecteur {
public:
	Couche();
	~Couche();
	bool ajouter(Forme* forme);
	Forme* retirer(int index);
	Forme* get_forme(int index);
	double aire_totale();
	bool translater_tout(struct Coordonnee coord);
	bool reinitialiser();
	bool changer_etat(int etat);
	int get_etat();

private:
	int etat = 0; //Initialisé=0, Active=1, Inactif=2
	Vecteur* vecteur;


};

#endif

