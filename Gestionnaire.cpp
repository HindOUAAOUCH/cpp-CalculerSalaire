#include "Gestionnaire.h"

Gestionnaire::Gestionnaire(string nom, string prenom, int Salire_Hebdomadaire):Employe(nom,prenom), Salire_Hebdomadaire(Salire_Hebdomadaire)
{
    cout << "cont gestionnaire" << endl;
}

void Gestionnaire::afficher() const
{
    cout << "afficher Gestionnaire" << endl;
    Employe::afficher();
    cout << "Salire_Hebdomadaire : " << Salire_Hebdomadaire << endl;

}

double Gestionnaire::calculerSalaire() const
{
    cout << "calculer Gestionnaire" << endl;
    return ( Salire_Hebdomadaire * 4 );
}

Gestionnaire::~Gestionnaire()
{
    cout << "destruc gestionnaire" << endl;
}
