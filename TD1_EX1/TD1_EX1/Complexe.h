#pragma once
#include <iostream>
#include <string>

using namespace std;
class Complexe
{
	// Prototypage des fonctions:
public:
	Complexe(void); // Constructeur par défault.
	Complexe(double, double); // Constructeur de paramètres scalaires.
	Complexe(const Complexe &); // Constructeur de copie.
	void affichage(void) const; // Méthode affichage.
	string affichage(string) const; // Méthode affichage surchargé.
	double module(void); // Méthode  module.
	Complexe conjuge(void); // Méthode  conjuge.
	Complexe operator+(const Complexe &) const; // Méthode operator+.
	Complexe operator+(double) const; // Méthode operator+ surchargé.
	Complexe operator*(const Complexe &) const; // Méthode operator*.
	Complexe operator*(double) const; // Méthode  operator* surchargé.
	Complexe operator-(const Complexe &) const; // Méthode operator-.
	Complexe operator-(double) const; // Méthode operator- surchargé.

	// Déclaration des attributs:
private:
	double re, im;
};

