/********
 * Fichier: graphicus-01.cpp
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: gestionnaire de tests pour l'application Graphicus.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"
#include "rectangle.h"

using namespace std;

int main()
{
	//Tests tests;

	//tests.tests_application();
	
	Rectangle rectangle1;

	rectangle1.set_hauteur(5);
	rectangle1.set_largeur(5);
	
	rectangle1.afficher(cout);

	

	return 0;
}

