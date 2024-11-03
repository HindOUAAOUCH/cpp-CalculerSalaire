#include "Commercial.h"
int Commercial::commission = 20;

Commercial::Commercial(string nom, string prenom, int nbrHeure, int total_vente):Employe(nom,prenom,nbrHeure), total_vente(total_vente)
{
    cout << "const commercial" << endl;
}

void Commercial::afficher() const
{
    cout << "afficher commercial" << endl;
    Employe::afficher();
    cout << "total de vente : " << total_vente << endl;
    cout << "commission : " << commission << endl;
}

double Commercial::calculerSalaire() const
{
    cout << "calculer commercial" << endl;
    double s = Employe::calculerSalaire();
    return (s + ( total_vente * commission ) );
}

Commercial::~Commercial()
{
    cout << "destruc commercial" << endl;
}
