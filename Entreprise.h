#pragma once
#include <iostream>
#include "Employe.h"
using namespace std;

class Entreprise
{
private:
	int id;
	static int comp;
	
	Employe** Les_Employe;
	static int maxE;
	int nbrE;

public:
	Entreprise();
	void afficher()const;
	void ajouterE(Employe* E);
	void resize();
	void afficherSalaire()const;
	~Entreprise();

};

