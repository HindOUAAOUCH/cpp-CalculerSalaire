#include "Gestionn_Commercial.h"

Gestionn_Commercial::Gestionn_Commercial(string nom, string prenom, int total_vente, int Salire_Hebdomadaire)
	:Commercial(nom, prenom, total_vente), Gestionnaire(nom, prenom, Salire_Hebdomadaire)
{
	cout << "const Gestionn_Commercial" << endl;
}

void Gestionn_Commercial::afficher() const
{
	cout << "afficher Gestionn_Commercial" << endl;
}

double Gestionn_Commercial::calculerSalaire() const
{
	cout << "salaire Gestionn_Commercial" << endl;
	return ( 2000 );
}

//void Gestionn_Commercial::afficher() const
//{
//	cout << "afficher Gestionn_Commercial" << endl;
//}
//
//double Gestionn_Commercial::calculerSalaire() const
//{
//	return 0.0;
//}

Gestionn_Commercial::~Gestionn_Commercial()
{
	cout << "destruc Gestionn_Commercial" << endl;
}
