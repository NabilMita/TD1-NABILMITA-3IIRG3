#include "stdafx.h"
#include "Compte.h"
#include <iostream>
#include <string>

using namespace std;
Compte::Compte()
{
	this->numCompte = 0;
	this->nomProprietaire = "";
	this->solde = 0.0;
}

Compte::Compte(unsigned int numC, string nomP, double S)
{
	this->numCompte = numC;
	this->nomProprietaire = nomP;
	this->solde = S;
}

bool Compte::retirerArgent(const double &montant) 
{
	if (this->solde > montant && this->solde != 0){
		this->solde -= montant;
		cout << "\nNous venons de retirer un montant de " << montant << "DH de votre compte!" << endl;
		return true;
	}
	return false;
}

void Compte::deposerArgent(const double &montant)
{
	this->solde += montant;
	cout << "\nVotre compte a ete accredite d\'un montant de " << montant << "DH!" << endl;
}

void Compte::consulterSolde() const
{
	cout << "Le solde actuel de votre compte est: " << this->solde << "DH!" << endl;
}

void Compte::transfererArgent(const double &montant, Compte &destinataire)
{
	destinataire.solde += montant;
	cout << "\nNous venons d\'effectuer un transfert d\'un montant de " << montant << "DH a votre compte!" << endl;
}

void Compte::consulterCompte() const
{
	cout << "Numero de compte: " << this->numCompte << endl;
	cout << "Nom du Proprietaire: " << this->nomProprietaire << endl;
	cout << "Solde du compte: " << this->solde << "DH" << endl;
}