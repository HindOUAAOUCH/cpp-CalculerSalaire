// ExerciceSalaire.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Entreprise.h"
#include "Employe.h"
#include "Commercial.h"
#include "Gestionnaire.h"
#include "Gestionn_Commercial.h"


int main()
{
    /*std::cout << "------- Exercice Salaire : -------\n";*/

    Entreprise* Entr = new Entreprise();
    Employe* E1 = new Employe("Hind", "OUAAOUCH", 10);
    Employe* E2 = new Gestionnaire("Naaima", "TIRS", 400);
    Employe* E3 = new Commercial("OUSSAMA", "OUAAOUCH", 10, 20);
    Employe* E4 = new Gestionn_Commercial("hih", "hah", 20, 400);

    E1->afficher(); cout << "\n";
    E2->afficher(); cout << "\n";
    E3->afficher(); cout << "\n";
    E4->afficher(); cout << "\n";

    Entr->ajouterE(E1);
    Entr->ajouterE(E2);
    Entr->ajouterE(E3);
    Entr->ajouterE(E4);

    cout << "\n";
    Entr->afficher();
    cout << "\n";
    Entr->afficherSalaire();
    cout << "\n";

    delete Entr;
    delete E1;
    delete E2;
    delete E3;
    delete E4;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
