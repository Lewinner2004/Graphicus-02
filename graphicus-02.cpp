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

using namespace std;

int main()
{
	//Tests tests;

	//tests.tests_application();
	
	Rectangle rectangle1(1, 2, 4, 5);
	rectangle1.afficher(cout);

	Carre carre1;
	carre1.set_cote(4);
	carre1.afficher(cout);

	Cercle cercle1(2, 3, 10);
	cercle1.afficher(cout);
	

	return 0;
}

