#pragma once
#include "Salarie.h"

class Employe : public Salarie
{
private:
	int nbrHeure;
	static int tauxHoraire;

public:
	Employe(string nom="", string prenom="", int nbrHeure=0);
	virtual void afficher()const;
	virtual double calculerSalaire()const override;
	~Employe();

};

