#include "Employe.h"
int Employe::tauxHoraire = 50;

Employe::Employe(string nom, string prenom, int nbrHeure):Salarie(nom,prenom),nbrHeure(nbrHeure)
{
	cout << "const employe " << endl;
}

void Employe::afficher() const
{
	cout << "afficher employe " << endl;
	Salarie::afficher();
	cout << "nbrHeure : " << nbrHeure << endl;
	cout << "tauxHoraire : " << tauxHoraire << endl;
}

double Employe::calculerSalaire() const
{
	cout << "calculer employe " << endl;
	return ( nbrHeure * tauxHoraire );
}

Employe::~Employe()
{
	cout << "destruc employe " << endl;
}
