/********
 * Fichier: graphicus-01.cpp
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: gestionnaire de tests pour l'application Graphicus.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"
#include "carre.h"
#include "cercle.h"
#include "vecteur.h"
#include "canevas.h"

using namespace std;

int main()
{
	//Tests tests;

	//tests.tests_application();
	
	Canevas canevas;
	Cercle cercle1(1, 2, 5);
	Cercle* p_cercle1 = &cercle1;

	canevas.activerCouche(1);
	canevas.ajouterForme(p_cercle1);

	canevas.afficher(cout);


	
	

	return 0;
}

