#include "Salarie.h"
int Salarie::comp = 0;

Salarie::Salarie(string nom, string prenom):id(comp++),nom(nom),prenom(prenom)
{
    cout << "cont salarie " << endl;
}

void Salarie::afficher() const
{
    cout << "afficher salarie " << endl;
    cout << "id : " << this->id << endl;
    cout << "nom : " << this->nom<< endl;
    cout << "prenom : " << prenom << endl;
}

Salarie::~Salarie()
{
    cout << "destruc salarie " << endl;
}
