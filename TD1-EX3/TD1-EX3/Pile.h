#pragma once
#include <iostream>

using namespace std;
// METHODE CLASSIQUE, SINON EN C++ ON PEUT UTILISER #include <stack> POUR MANIPULER LES PILES
class Pile
{
	// Prototypage des fonctions:
public:
	Pile(void); // Constructeur par défaut (sans paramètres).
	Pile(int, int, int *); // Constructeur des paramètres scalaires.
	void empiler(int); // Méthode empiler.
	void depiler(void); // Méthode depiler.
	bool pileVide(void) const; // Méthode pileVide.
	void afficherPile(void) const; // Méthode afficherPile.
	int sommet(void) const; // Méthode sommet.
	void viderPile(void);  // Méthode viderPile.
   //~Pile(void); // Destructeur.

	// Déclaration des attributs:
private:
	int sommetPile;
	int element;
	int *tabPile;
};

