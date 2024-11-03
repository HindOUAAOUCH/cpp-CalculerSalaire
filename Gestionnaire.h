#pragma once
#include "Employe.h"
class Gestionnaire : virtual public Employe
{
private:
	int Salire_Hebdomadaire; 

public:
	Gestionnaire(string nom = "", string prenom = "", int Salire_Hebdomadaire = 0);
	void afficher()const;
	double calculerSalaire()const;
	~Gestionnaire();

};

