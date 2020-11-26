#include "stdafx.h"
#include "Complexe.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

Complexe::Complexe()
{
	// Initialisation des attributs (constructeur par défaut):
	this->re = 0.0;
	this->im = 0.0;
}

Complexe::Complexe(double re, double im)
{
	// Initialisation des attributs (constructeur de paramètres scalaires):
	this->re = re;
	this->im = im;
}

Complexe::Complexe(const Complexe &Z)
{
	// Constructeur de copie:
	this->re = Z.re;
	this->im = Z.im;
}

void Complexe::affichage() const
{
	if (this->im < 0){
		cout << this->re << "-i" << -this->im << endl;
	}else{
		cout << this->re << "+i" << this->im << endl;
	}
}

double Complexe::module()
{
	return sqrt(pow(this->re, 2) + pow(this->im, 2));
}

Complexe Complexe::conjuge()
{
	Complexe res;
	res.re = this->re;
	res.im = -this->im;
	return res;
}

string Complexe::affichage(string Z) const
{	
	if (this->im < 0){
		Z = to_string(this->re) + "-i" + to_string(-this->im);
	}else{
		Z = to_string(this->re) + "+i" + to_string(this->im);
	}
	return Z;	
}

Complexe Complexe::operator+(const Complexe &Z) const
{
	Complexe Res;
	Res.re = this->re + Z.re;
	Res.im = this->im + Z.im;
	return Res;
}

Complexe Complexe::operator+(double Z) const
{
	Complexe Res;
	Res.re = this->re + Z;
	Res.im = this->im;
	return Res;
}

Complexe Complexe::operator*(const Complexe &Z) const
{
	Complexe Res;
	Res.re = (this->re * Z.re) - (this->im * Z.im);
	Res.im = (this->re * Z.im) + (this->im * Z.re);
	return Res;
}

Complexe Complexe::operator*(double Z) const
{
	Complexe Res;
	Res.re = this->re * Z;
	Res.im = this->im;
	return Res;
}

Complexe Complexe::operator-(const Complexe &Z) const
{
	Complexe Res;
	Res.re = this->re - Z.re;
	Res.im = this->im - Z.im;
	return Res;
}

Complexe Complexe::operator-(double Z) const
{
	Complexe Res;
	Res.re = this->re - Z;
	Res.im = this->im;
	return Res;
}