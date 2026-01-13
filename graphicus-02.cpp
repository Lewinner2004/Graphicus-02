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
#include "rectangle.h"

using namespace std;

int main()
{
	//Tests tests;

	//tests.tests_application();

	//Tests test;

	//test.tests_validation();

	Canevas canevas;
	Forme* rectangle1 = new Rectangle(0, 0, 4, 5);
	Forme* carre1 = new Carre(4, 8, 5);
	Forme* cercle1 = new Cercle(-1, 6, 7);
	Forme* cercle2 = new Cercle(5, 6, 4);

	canevas.activerCouche(1);
	canevas.ajouterForme(rectangle1);
	canevas.ajouterForme(carre1);
	canevas.ajouterForme(cercle1);
	
	canevas.activerCouche(3);
	canevas.ajouterForme(cercle2);
	
	canevas.afficher(cout);
	cout << "Aire totale: " << canevas.aire() << endl;

	canevas.activerCouche(0);
	Forme* rectangle2 = new Rectangle(2, 3, 8, 9);
	canevas.ajouterForme(rectangle2);
	canevas.translater(3, 3);
	canevas.afficher(cout);
	cout << "Aire totale: " << canevas.aire() << endl;

	canevas.activerCouche(3);
	canevas.retirerForme(0);
	delete cercle2;
	canevas.afficher(cout);
	cout << "Aire totale: " << canevas.aire() << endl;


	canevas.reinitialiser();
	delete rectangle1, rectangle2, cercle1, cercle2, carre1;
	canevas.afficher(cout);
	cout << "Aire totale: " << canevas.aire() << endl;





	
	

	return 0;
}

