// main.cpp : Ce fichier contient la fonction 'main'.

#include <iostream>
#include "Pile.h"
#include <string>

using namespace std;

void main()
{
	Pile P1;

    P1.empiler(2);
	P1.empiler(3);
	P1.empiler(4);
	P1.empiler(5);
	P1.empiler(6);
	P1.empiler(0);
	P1.afficherPile();
	cout << "\nLe sommet de la Pile est: " << P1.sommet() << endl;
	P1.depiler();
	P1.afficherPile();
	cout << "Pile vide?: " << P1.pileVide() << endl;
	cout << "\nVidage de la Pile.." << endl;

	P1.viderPile();
	P1.afficherPile();
	P1.depiler(); // On essaie de dépiler une pile vide.
	//P1.~Pile(); // Appel du destructeur.

	system("pause");
}
