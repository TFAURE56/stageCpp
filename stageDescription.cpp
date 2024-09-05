// stageDescription.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Mission.h"
#include "Entreprise.h"
using namespace std;

int main()
{
    // Création d'une mission en demandant les informations à l'utilisateur
    string descriptif;
    int nbPersonne, nbHeure;

    cout << "Entrez le descriptif de la mission : ";
    getline(cin, descriptif);

    cout << "Entrez le nombre de personnes requises : ";
    cin >> nbPersonne;

    cout << "Entrez le nombre d'heures estimees : ";
    cin >> nbHeure;

    // Création de la mission avec les données saisies
    Mission mission(nbPersonne, descriptif, nbHeure);

    // Affichage des informations de la mission
    cout << "\nMission creee :" << endl;
    cout << "Descriptif : " << mission.getDescriptifMission() << endl;
    cout << "Nombre de personnes : " << mission.getNbPersonne() << endl;
    cout << "Nombre d'heures estimees : " << mission.getNbHeure() << endl;

    // Exemple d'utilisation d'un setter pour modifier une information
    mission.setNbPersonne(mission.getNbPersonne() + 2);
    cout << "Nombre de personnes mis a jour : " << mission.getNbPersonne() << endl;

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
