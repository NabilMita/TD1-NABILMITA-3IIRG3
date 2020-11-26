// main.cpp : fichier projet principal.

#include "stdafx.h"
#include "Compte.h"
#include <iostream>

using namespace std;
void main()
{
	Compte A(50003, "Ahmed Amine", 8050.175);
	Compte B(50005, "Mita Nabil", 9400.98);
	double montant;

	cout << "-- Compte A: --" << endl;
	A.consulterCompte();

	A.deposerArgent(12000);
	A.consulterSolde();

	cout << "\nEntrer le montant a retirer: ";
	cin >> montant;
	A.retirerArgent(montant);
	A.consulterSolde();

	cout << "\n-- Compte B: --" << endl;
	B.consulterCompte();

	cout << "\nEntrer le montant a transferer au compte B: ";
	cin >> montant;
	B.transfererArgent(montant, B);
	B.consulterSolde();

	system("pause");
}