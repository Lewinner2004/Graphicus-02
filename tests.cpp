#include "tests.h"


Tests::Tests() {

}

Tests::~Tests() {

}

void Tests::tests_validation(){

	cout << "PARTIE 1" << endl << endl;

	Canevas canevas;
	Cercle cercle1(0, 0, 5);
	Carre carre1(4, 1, 6);
	Rectangle rectangle1(2, 8, 3, 9);
	Rectangle rectangle2(0, 0, 4, 2);

	canevas.activerCouche(2);
	canevas.ajouterForme(&cercle1);
	canevas.ajouterForme(&carre1);
	canevas.ajouterForme(&rectangle1);

	canevas.activerCouche(1);
	canevas.ajouterForme(&rectangle2);

	canevas.afficher(cout);
	cout << "Aire totale: " << canevas.aire() << endl;
	cout << endl << "REUSSI!" << endl;

	cout << endl << "PARTIE 2 " << endl << endl;

	Rectangle rectangle3(0, 0, 1, 1);
	Carre carre2(-1, -3, 1);
	Cercle cercle2(0, 0, 2);

	canevas.activerCouche(0);
	canevas.ajouterForme(&rectangle3);
	canevas.ajouterForme(&carre2);
	canevas.ajouterForme(&cercle2);

	canevas.activerCouche(2);
	canevas.translater(4, 3);

	canevas.afficher(cout);
	cout << "Aire totale: " << canevas.aire() << endl;
	cout << endl << "REUSSI!" << endl;

	cout << endl << "PARTIE 3" << endl << endl;

	canevas.activerCouche(0);
	canevas.retirerForme(1);

	canevas.activerCouche(0);
	canevas.retirerForme(0);

	canevas.activerCouche(2);
	canevas.reinitialiserCouche(2);

	canevas.afficher(cout);
	cout << "Aire totale: " << canevas.aire() << endl;
	cout << endl << "REUSSI!" << endl;

	cout << endl << "PARTIE 4" << endl << endl;

	canevas.reinitialiser();

	canevas.afficher(cout);
	cout << "Aire totale: " << canevas.aire() << endl;
	cout << endl << "REUSSI!" << endl;









}

