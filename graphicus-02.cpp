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

using namespace std;

int main()
{
	//Tests tests;

	//tests.tests_application();
	
	Rectangle rectangle1(0, 0, 4, 5);
	Rectangle* p_rectangle1;
	p_rectangle1 = &rectangle1;

	Cercle cercle1(0, 0, 6);
	Cercle* p_cercle1;
	p_cercle1 = &cercle1;



	Vecteur vecteur1;

	vecteur1.ajouter(p_rectangle1);
	vecteur1.ajouter(p_cercle1);
	vecteur1.afficher(cout);


	
	

	return 0;
}

