/*****************************************************************//**
 * \file   Mission.cpp
 * \brief  Definition de la classe Mission
 * 
 * \author Pierre
 * \version 0.1
 * \date   June 2023
 * 
 * Programme Cpp permettant de creer des objets pour décrire les stages
 *********************************************************************/

#include "Mission.h"



using namespace std;


/**
 * \brief Constructeur par default 
 * \li Nom = anonyme
 * \li Ville = inconnu
 *  
 */
Mission::Mission() {

	this->nbPersonne = 0;
	this->descriptifMission = "Une description";
    this->nbHeure = 0;

}

/**
 * \brief Constructeur avec parametres rentres en argument
 * 
 * \param nbPersonne de la mission
 * \param descriptifMission de la mission
 * \param nbHeure de la mission
 */
Mission::Mission(int nbPersonne, std::string descriptifMission, int nbHeure) {
	this->nbPersonne = nbPersonne;
    this->descriptifMission = descriptifMission;
	this->nbHeure = nbHeure;
}


/**
 * \brief Destructeur
 * 
 */
Mission::~Mission() {

	cout << "Destruction de la mission" << endl;

}

/**
 * \brief Constructeur de copie
 *  
 * \param entre Objet de type Mission
 */
Mission::Mission(const Mission& entre)
{
    cout << "Copie de Mission" << endl;
    this->nbPersonne = entre.nbPersonne;
    this->descriptifMission = entre.descriptifMission;
    this->nbHeure = entre.nbHeure;

}

/**
 * \brief Operateur d'affectation
 * 
 * \param entre Objet de type Mission
 * \return Nouvelle objet de type Mission
 */
Mission &Mission::operator = (const Mission& entre)
{ 
    cout << "Affectation de la mission" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
        this->nbPersonne = entre.nbPersonne;
        this->descriptifMission = entre.descriptifMission;
        this->nbHeure = entre.nbHeure;
    }
    return *this;
}


/**
 * \brief Accesseur de l'attribut nomMission
 * 
 * \return Nom de l'Mission
 */
int Mission::getNbPersonne()
{
    return this->nbPersonne;
}

/**
 * \brief Mutateur de l'attribut nomMission
 *
 * \param nouveauNom nouveau nom de l'Mission
 */
void Mission::setNbPersonne(int nbPersonne){
    this->nbPersonne = nbPersonne;
}

/**
 * \brief Accesseur de l'attribut villeMission
 * 
 * \return Nom de l'Mission
 */
std::string Mission::getDescriptifMission() {
    return this->descriptifMission;
}


/**
 * \brief Mutateur de l'attribut villeMission
 * 
 * \param nouvelleVille nouvelle ville de l'Mission
 */
void  Mission::setDescriptifMission(std::string newDescriptifMission) {
    this->descriptifMission = newDescriptifMission;
}

/**
 * \brief Accesseur de l'attribut nomMission
 *
 * \return Nom de l'Mission
 */
int Mission::getNbHeure()
{
    return this->nbHeure;
}

/**
 * \brief Mutateur de l'attribut nomMission
 *
 * \param nouveauNom nouveau nom de l'Mission
 */
void Mission::setNbHeure(int nbHeure) {
    this->nbHeure = nbHeure;
}
