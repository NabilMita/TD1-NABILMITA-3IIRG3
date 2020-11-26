#include "stdafx.h"
#include "Points.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
Points::Points()
{
	// Initialisation des attributs (constructeur par défaut):
	this->x = 0.0;
	this->y = 0.0;
}

Points::Points(double x, double y)
{
	// Initialisation des attributs (constructeur de paramètres scalaires):
	this->x = x;
	this->y = y;
}

string Points::affichage() const
{
	return "(" + to_string(this->x) + "," + to_string(this->y) + ")";
}

double Points::distance(const Points &P) const
{
	return sqrt(pow(P.x - this->x, 2) + pow(P.y - this->y, 2));
}

Points Points::translate(double dx, double dy)
{
	this->x += dx;
	this->y += dy;

	return *this;
}

bool Points::operator==(const Points &P) const
{
	if (this->x == P.x && this->y == P.y){
		return true;
	}
	return false;
}