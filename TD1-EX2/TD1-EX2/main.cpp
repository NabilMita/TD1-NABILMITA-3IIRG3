// main.cpp : fichier projet principal.

#include "stdafx.h"
#include "Cercle.h"
#include <iostream>

using namespace std;

void main()
{
	Cercle C1; // Instanciation d'un nouveau obj C1 en appelant le constructeur par défaut.
	Points P1(1.3, 4.2); // Instanciation d'un nouveau obj P1 en appelant le constructeur de paramètres scalaires.
	Cercle C2(P1, 3.5); // Instanciation d'un nouveau obj C2 en appelant le constructeur de paramètres scalaires.
	double R;

	cout << "Cercle 1: " << C1.affichage() << endl; // Affichage de l'obj C1
	cout << "Point 1: " << P1.affichage() << endl; // Affichage de l'obj P1
	cout << "Cercle 2: " << C2.affichage() << endl; // Affichage de l'obj C2

	cout << "Changement du rayon du cercle 2: " << C2.affichage() << endl;
	cout << "Entrer le nouveau rayon: ";
	cin >> R;
	C2.set_rayon(R);
	cout << "Nouveau Rayon du Cercle 2 est: " << C2.get_rayon() << endl;
	cout << "Calcul de surface: " << C2.surface() << endl;
	cout << "Calcul du perimetre: " << C2.perimetre() << endl;
	cout << "Est-ce que le cercle 1 est egale au cercle 2?: " << C2.operator==(C1) << endl;
	cout << "Est-ce que le point 1 appartient au cercle 2?: " << C2.appartenance(P1) << endl;
	
	system("pause");
}
