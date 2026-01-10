/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Implémentation des méthodes des classes décrites dans
 *    tests.h.  Ce fichier peut être adapté à vos besoins de tests.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"

void Tests::tests_unitaires_formes()
{
	// Tests des formes géométriques
}

void Tests::tests_unitaires_vecteur()
{
	// Tests de la classe Vecteur
}

void Tests::tests_unitaires_couche()
{
	// Tests de la classe Couche
}

void Tests::tests_unitaires_canevas()
{
	// Tests de la classe Canevas
}

void Tests::tests_unitaires()
{
	// Faire tous les tests unitaires
	tests_unitaires_formes();
	tests_unitaires_vecteur();
	tests_unitaires_couche();
	tests_unitaires_canevas();
}

void Tests::tests_application()
{
	// Faire tous les tests applicatifs
	tests_application_cas_01();
	tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
	cout << "TESTS APPLICATION (CAS 01)" << endl;
	// Il faut ajouter les opérations réalisant ce scénario de test.
}

void Tests::tests_application_cas_02()
{
	cout << "TESTS APPLICATION (CAS 02)" << endl;
	// Il faut ajouter les opérations realisant ce scénario de test.
}
