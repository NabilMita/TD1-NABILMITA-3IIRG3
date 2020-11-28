#include "Temps.h"
#include <iostream>
#include <string>

using namespace std;
Temps::Temps()
{
	// Initialisation des attributs (constructeur par défaut):
	this->heure = 0;
	this->minute = 0;
	this->seconde = 0;
}

Temps::Temps(int h, int m, int s)
{
	// Initialisation des attributs (constructeur de paramètres scalaires):
	this->heure = h;
	this->minute = m;
	this->seconde = s;
}

void Temps::initTemps()
{
	*this = Temps(); // Appel du constructeur par défaut pour remplacer l'objet actuel.
	cout << "\nHoraire initialise avec success!" << endl;
}

string Temps::affichageENG() const
{
	string HMS = "\nHoraire ENG: ";
	string jourNuit;

	if (this->heure <=12){
		HMS += to_string(this->heure);
		jourNuit = "AM";
	}
	else{
		HMS += to_string((this->heure) - 12);
		jourNuit = "PM";
	}

	HMS += ":" + to_string(this->minute) + ":" + to_string(this->seconde) + jourNuit;
	return HMS;
}

string Temps::affichageFR() const
{
	string HMS = "\nHoraire FR: ";

	if ( ((this->heure)+12) > 24 ) 
		HMS += to_string(this->heure);
	else
		HMS += to_string((this->heure) + 12);

	HMS += ":" + to_string(this->minute) + ":" + to_string(this->seconde);
	return HMS;
}

string Temps::affichage() const
{
	return to_string(this->heure) + ":" + to_string(this->minute) + ":" + to_string(this->seconde);
}

bool Temps::inferieur(Temps T1, Temps T2) const
{
	int totalSec1 = (T1.heure * 3600 + T1.minute * 60) + T1.seconde; // Convertir le tout en secondes.
	int totalSec2 = (T2.heure * 3600 + T2.minute * 60) + T2.seconde;
	if (totalSec1 < totalSec2) {
		return true;
	}
	return false;
}

void Temps::comparerHeure(int h, int m, int s) const
{
	Temps tmp(h, m, s);
	if (this->inferieur(*this, tmp) == true)
		cout << "\nL\'horaire actuel " << this->affichage() << " est inferieur a " << tmp.affichage() << endl;
	else
		cout << "\nL\'horaire actuel " << this->affichage() << " est superieur a " << tmp.affichage() << endl;
}

void Temps::lireHeure()
{
	cout << "\nEntrer l\'heure: ";
	cin >> this->heure;
	cout << "Entrer la minute: ";
	cin >> this->minute;
	cout << "Entrer la seconde: ";
	cin >> this->seconde;
}
