#include "Pile.h"
#include <iostream>
#include <string>

using namespace std;

Pile::Pile()
{
	this->sommetPile = 0;
	this->element = 0;
	this->tabPile = new int[10];
}

Pile::Pile(int sommet, int elem, int *tabPile)
{
	this->sommetPile = sommet;
	this->element = elem;
	this->tabPile = new int[10];
	for (int i = 0; i < 10; i++) {
		this->tabPile[i] = tabPile[i];
	}
}

void Pile::empiler(int elem)
{
	cout << "Empilement de '" << elem << "'" << endl;
	this->tabPile[this->sommetPile] = elem; // Empilement au sommet actuel.
	(this->sommetPile)++; // Auto incrémentation du sommet.
}

void Pile::depiler()
{
	if (this->sommetPile != 0) { // Vérifie si la pile n'est pas vide pour dépiler.
		(this->sommetPile)--; // Auto décrémentation du sommet.
		cout << "\nDernier element '" << this->tabPile[this->sommetPile] << "' depile avec success!" << endl;
	}
	else { // PILE VIDE, RIEN A DEPILER.
		cout << "\nImpossible de depiler, la pile est vide!" << endl;
	}
}

bool Pile::pileVide() const
{
	if (this->sommetPile == 0) { // Vérifie si le sommet est 0 => Pile vide.
		cout << "La pile est vide!" << endl;
		return true;
	}
	cout << "La pile est pleine!" << endl;
	return false;
}

void Pile::afficherPile() const
{
	cout << "\nAffichage de la Pile: " << endl;
	if (this->sommetPile != 0) {
		for (int i = 0; i < this->sommetPile; i++) {
			cout << this->tabPile[i] << endl;
		}
	}
	else {
		cout << "Rien a afficher la pile est vide!" << endl;
	}
}

int Pile::sommet(void) const
{
	return this->sommetPile;
}

void Pile::viderPile(void)
{
	for (int i = 0; i < this->sommetPile; i++) {
		cout << "Depilement du dernier element '" << this->tabPile[i] << "'" << endl;
	}
	this->sommetPile = 0; // RESET du sommet.
}
/*
Pile::~Pile()
{
	delete []this->tabPile; // Libération de la mémoire alloué par le tableau.
	delete this; // Destruction de la classe mère (PILE).
}*/
	