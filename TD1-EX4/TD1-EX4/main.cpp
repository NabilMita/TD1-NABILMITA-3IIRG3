#include <iostream>
#include <string>
#include "Temps.h"

using namespace std;
void main()
{
	Temps T1;
	Temps T2(22, 30, 25);
	char choix;

	cout << T1.affichageENG() << endl;
	cout << T1.affichageFR() << endl;
	T1.lireHeure();
	cout << "\nEntrer le type d\'affichage de l\'horaire (A pour Anglais | F pour Francais): "; 
	cin >> choix;

	switch (choix) {
		case 'A': cout << T1.affichageENG() << endl; break;
		case 'F': cout << T1.affichageFR() << endl; break;
		default: cout << "\nChoix incorrect!" << endl; break;
	}
	fflush(stdin);

	T1.comparerHeure(13, 25, 30);
	T1.initTemps();
	cout << T1.affichage() << endl;
	cout << "\nSaisie horaire 2: " << endl;
	T1.lireHeure();

	cout << T1.affichageENG() << endl;
	cout << T1.affichageFR() << endl;

	if(T1.inferieur(T1, T2))
		cout << "\nL\'horaire " << T1.affichage() << " est inferieur a l\'horaire " << T2.affichage() << endl;
	else
		cout << "\nL\'horaire " << T1.affichage() << " est superieur a l\'horaire " << T2.affichage() << endl;

	system("pause");
}