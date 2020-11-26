#include "stdafx.h"
#include "Cercle.h"
#include <iostream>
#include <string>

using namespace std;
const double PI = 3.14;
Cercle::Cercle()
{
	// Initialisation des attributs (constructeur par défaut):
	this->rayon = 0.0;
	this->centre = Points();
}

Cercle::Cercle(Points P, double R)
{
	// Initialisation des attributs (constructeur de paramètres scalaires):
	this->rayon = R;
	this->centre = P;
}

string Cercle::affichage() const
{
	return to_string(this->rayon) + "," + this->centre.affichage();
}

double Cercle::get_rayon() const
{
	return this->rayon;
}

void Cercle::set_rayon(double nvR)
{
	this->rayon = nvR;
}

void Cercle::translate(double dx, double dy)
{
	this->centre.translate(dx, dy);
}

double Cercle::surface() const
{
	return PI * pow(this->rayon, 2);
}
double Cercle::perimetre() const
{
	return 2 * PI * this->rayon;
}

bool Cercle::operator==(const Cercle &C) const
{
	if (this->centre.operator==(C.centre) && this->rayon == C.rayon){
		return true;
	}
	return false;
}

bool Cercle::appartenance(const Points &P) const
{
	if (this->centre.distance(P) <= this->rayon){
		return true;
	}
	return false;
}
