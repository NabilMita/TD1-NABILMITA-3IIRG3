// main.cpp : fichier projet principal.

#include "stdafx.h"
#include <iostream>
#include "Complexe.h"

using namespace std;
void main()
{
	Complexe Z1; // Instanciation d'un nouveau obj Z1 en appelant le constructeur par défaut.
	Complexe Z2(3.5, 8.2); // Instanciation d'un nouveau obj Z2 en appelant le constructeur de paramètres scalaires.
	string Z;

	Z1.affichage(); // Affichage de l'obj Z1
	Z2.affichage(); // Affichage de l'obj Z2
	cout << "Le module est: " << Z2.module() << endl;
	Complexe Z3 = Z2.conjuge(); // Instanciation d'un nouveau obj Z3 en appelant la fonction conjuge().
	cout << "Le conjuge est: ";
	Z3.affichage();
	Complexe Z4(Z2); // Instanciation d'un nouveau obj Z4: COPIER Z2 DANS Z4 en appelant le constructeur de copie.
	cout << "Test constructeur de copie: ";
	Z4.affichage();
	cout << "Affichage surcharge de l\'obj Z2: " << Z2.affichage(Z) << endl;

	Complexe Z5 = Z2.operator+(Z4); // La somme complexe de l'obj Z2 + Z4
	Complexe Z6 = Z2.operator+(2.5); // La somme complexe de l'obj + un réel Z2 + 2.5 (méthode surchargé)
	Complexe Z7 = Z2.operator*(Z4); // Le produit complexe de l'obj Z2 * Z4
	Complexe Z8 = Z2.operator*(1.3); // Le produit complexe de l'obj * un réel Z2 * 1.3 (méthode surchargé)
	Complexe Z9 = Z2.operator-(Z5); // La soustraction complexe de l'obj Z2 - Z5
	Complexe Z10 = Z2.operator-(5.2); // La soustraction complexe de l'obj - un réel Z2 - 5.2  (méthode surchargé)

	cout << "Somme complexe des objets: ";
	Z5.affichage();
	cout << "Somme complexe objet + reel (methode surcharge): ";
	Z6.affichage();
	cout << "Produit complexe des objets: ";
	Z7.affichage();
	cout << "Produit complexe objet * reel (methode surcharge): ";
	Z8.affichage();
	cout << "Soustraction complexe des objets: ";
	Z9.affichage();
	cout << "Soustraction complexe objet - reel (methode surcharge): ";
	Z10.affichage();

	system("pause");
}
