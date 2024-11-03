#include "Entreprise.h"
int Entreprise::comp = 0;
int Entreprise::maxE = 10;

Entreprise::Entreprise():id(comp++), nbrE(0)
{
	cout << "cont Entreprise" << endl;

	Les_Employe = new Employe * [maxE];
	for (int i = 0; i < maxE; i++)
	{
		Les_Employe[i] = nullptr;
	}
}

void Entreprise::afficher() const
{
	cout << "afficher Entreprise" << endl;

	cout << "id : " << id << endl;
	for (int i = 0; i < nbrE; i++)
	{
		this->Les_Employe[i]->afficher();
	}
}

void Entreprise::ajouterE(Employe* E)
{
	cout << "ajouterE Employe" << endl;

	if (nbrE == maxE) resize();
	else  this->Les_Employe[this->nbrE++] = E;
}

void Entreprise::resize()
{
	cout << "resize tab E" << endl;
	maxE *= 2;
	Employe** newtable = new Employe* [maxE];
	for (int i = 0; i < maxE; i++)
	{
		newtable[i] = this->Les_Employe[i];
	}
	for (int i = 0; i < maxE; i++)
	{
		newtable[i] = nullptr;
	}
	delete[] this->Les_Employe;
	this->Les_Employe = newtable;
}

void Entreprise::afficherSalaire() const
{
	for (int i = 0; i < maxE; i++)
	{
		double s = this->Les_Employe[i]->calculerSalaire();
		cout << "salaire de" << i << " : " << s << endl;
	}
}

Entreprise::~Entreprise()
{
	cout << "destruc Entreprise" << endl;
	delete[] Les_Employe;
}
