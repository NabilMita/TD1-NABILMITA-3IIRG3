#pragma once
#include <iostream>
#include <string>

using namespace std;
class Compte
{
	// Prototypage des fonctions:
public:
	Compte(void);
	Compte(unsigned int, string, double);
	bool retirerArgent(const double &);
	void deposerArgent(const double &);
	void consulterSolde(void) const;
	void transfererArgent(const double &, Compte &);
	void consulterCompte() const;

	// Déclaration des attributs:
private:
	unsigned int numCompte;
	string nomProprietaire;
	double solde;
};

