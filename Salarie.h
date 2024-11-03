#pragma once
#include <iostream>
using namespace std;

class Salarie
{
private:
	int id;
	static int comp;
	string nom;
	string prenom;

public:
	Salarie(string nom="", string prenom="");
	void afficher()const;
	virtual double calculerSalaire()const =0;
	~Salarie();


};

