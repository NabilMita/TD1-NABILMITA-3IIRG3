#pragma once
#include <iostream>
#include <string>

using namespace std;
class Temps
{
	// Prototypage des fonctions:
public:
	Temps(void);  // Constructeur par défault.
	Temps(int, int, int); // Constructeur de paramètres scalaires.
	void initTemps(void);  // Méthode initTemps.
	string affichageENG(void) const; // Méthode affichageENG.
	string affichageFR(void) const; // Méthode affichageFR.
	string affichage(void) const; // Méthode affichage.
	bool inferieur(Temps, Temps) const; // Méthode inferieur.
	void comparerHeure(int, int, int) const; // Méthode comparerHeure.
	void lireHeure(void); // Méthode lireHeure.

	// Déclaration des attributs:
private:
	int heure, minute, seconde;
};

