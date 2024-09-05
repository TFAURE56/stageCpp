/*****************************************************************//**
 * \file   Mission.h
 * \brief  Declaration de la classe Mission
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
class Mission
{

private:
    /**
     * Membre prive nbPersonne : contient le nombre de personnes affecté a une mission
     */
    int nbPersonne;
    /**
     * Membre prive descriptifMission : contient la description d'une mission
     */
    std::string descriptifMission;
    /**
     * Membre prive nbHeure : contient le nombre d'heure pour faire la mission
     */
    int nbHeure;



protected:



public:
    /*Classe sous forme canonique*/
    Mission();
    ~Mission();
    Mission(const Mission& entre);
    Mission& operator = (const Mission& entre);

    Mission(int nbPersonne, std::string descriptifMission, int nbHeure);
    int getNbPersonne();
    void setNbPersonne(int nbPersonne);
    std::string getDescriptifMission();
    void setDescriptifMission(std::string descriptifMission);
    int getNbHeure();
    void setNbHeure(int nbHeure);

};

#endif