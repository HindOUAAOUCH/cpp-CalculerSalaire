#pragma once
#include "Employe.h"
class Commercial : virtual public Employe
{
private:
	int total_vente;
	static int commission;

public:
	Commercial(string nom="", string prenom="", int nbrHeure =0, int total_vente=0);
	void afficher()const;
	double calculerSalaire()const;
	~Commercial();

};

