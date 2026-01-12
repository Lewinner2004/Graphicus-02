/********
 * Fichier: tests.h
 * Auteurs: C.-A. Brunet
 * Date: 28 novembre 2025
 * Description: Déclaration de la classe pour les tests de Graphicus.
 *    Ce fichier peut être adapté à vos besoins de tests.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include "canevas.h"
#include "cercle.h"
#include "carre.h"
#include "rectangle.h"

using namespace std;

class Tests
{
public:
	Tests();
	~Tests();
	void tests_validation();
};

#endif
