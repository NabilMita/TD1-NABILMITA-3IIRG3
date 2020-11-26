#pragma once
#include "Points.h"

class Cercle
{
	// Prototypage des fonctions:
public:
	Cercle(void);  // Constructeur par défault.
	Cercle(Points, double); // Constructeur de paramètres scalaires.
	string affichage(void) const; // Méthode affichage.
	double get_rayon() const; // Getters.
	void set_rayon(double); // Setters.
	void translate(double, double);  // Méthode translate.
	double surface() const; // Méthode surface.
	double perimetre() const; // Méthode perimetre.
	bool operator==(const Cercle &) const; // Méthode operator==.
	bool appartenance(const Points &) const; // Méthode appartenance.

	// Déclaration des attributs:
private:
	double rayon;
	Points centre;
};

