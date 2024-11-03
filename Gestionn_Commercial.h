#pragma once
#include <iostream>
#include "Gestionnaire.h"
#include "Commercial.h"

class Gestionn_Commercial : public Gestionnaire, public Commercial
{
private:

public:
	Gestionn_Commercial(string nom = "", string prenom = "", int total_vente = 0, int Salire_Hebdomadaire = 0);
	void afficher()const;
	double calculerSalaire() const;
	~Gestionn_Commercial();


};

