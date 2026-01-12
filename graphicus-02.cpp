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
#include "couche.h"
#include "forme.h"

using namespace std;

int main()
{
	//Tests tests;

	//tests.tests_application();

	Couche couche1;

	Carre carre(0, 0, 4);
	Rectangle rectangle(1, 1, 3, 4);
	Cercle cercle(4, 4, 6);

	Carre* p_carre = &carre;
	Rectangle* p_rectangle = &rectangle;
	Cercle* p_cercle = &cercle;

	couche1.changer_etat(1);
	couche1.ajouter(p_carre);
	couche1.ajouter(p_rectangle);
	couche1.ajouter(p_cercle);

	couche1.afficher(cout);




	
	

	return 0;
}

