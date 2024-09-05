/*****************************************************************//**
 * \file   Entreprise.h
 * \brief  Declaration de la classe entreprise
 *
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>


 /*! \class Mission
    * \brief classe representant une mission. 3 attributs prives
    *
    * Cette classe a une finalite pedagogique :
    * \li : Rappel du C++
    * \li : commentaire avec Doxygen
    * \li : git, github
    */
class Missions
{

private:
    /**
     * Membre prive nbPersonne : contient le nombre de personnes affecté a une mission
     */
    std::string nbPersonne;
    /**
     * Membre prive descriptifMission : contient la description d'une mission
     */
    std::string descriptifMission;
    /**
     * Membre prive nbHeure : contient le nombre d'heure pour faire la mission
     */
    std::string nbHeure;



protected:



public:
    /*Classe sous forme canonique*/
    Mission();
    ~Mission();
    Entreprise(const Entreprise& entre);
    Entreprise& operator = (const Entreprise& entre);

    Entreprise(std::string nom, std::string ville);
    std::string getNomEntreprise();
    void setEntreprise(std::string nouveauNom);
    std::string getVilleEntreprise();
    void setVilleEntreprise(std::string nouvelleVille);

};

#endif