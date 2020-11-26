#pragma once
#include <iostream>
#include <string>

using namespace std;
class Points
{
	// Prototypage des fonctions:
public:
	Points(void);  // Constructeur par défault.
	Points(double , double); // Constructeur de paramètres scalaires.
	string affichage(void) const;  // Méthode affichage.
	double distance(const Points &) const; // Méthode distance.
	Points translate(double, double); // Méthode translate.
	bool operator==(const Points &) const; // Méthode operator==.

	// Déclaration des attributs:
private:
	double x, y;
};

