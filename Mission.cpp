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

	this->nomMission = "Nom inconnu";
	this->villeMission = "Vannes";

}

/**
 * \brief Constructeur avec parametres rentres en argument
 * 
 * \param nom nom de l'Mission
 * \param ville ville de l'Mission
 */
Mission::Mission(std::string nom, std::string ville) {
	this->nomMission = nom;

	this->villeMission = ville;
}


/**
 * \brief Destructeur
 * 
 */
Mission::~Mission() {

	cout << "Destrcution de l'Mission " << this->nomMission << " " << this->villeMission << endl;

}

/**
 * \brief Constructeur de copie
 *  
 * \param entre Objet de type Mission
 */
Mission::Mission(const Mission& entre)
{
    cout << "Copie de Capitaine" << endl;
    this->nomMission = entre.nomMission;
    this->villeMission = entre.villeMission;

}

/**
 * \brief Operateur d'affectation
 * 
 * \param entre Objet de type Mission
 * \return Nouvelle objet de type Mission
 */
Mission &Mission::operator = (const Mission& entre)
{ 
    cout << "Affectation de l'Mission" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
        this->nomMission = entre.nomMission;
        this->villeMission = entre.villeMission;
    }
    return *this;
}


/**
 * \brief Accesseur de l'attribut nomMission
 * 
 * \return Nom de l'Mission
 */
std::string Mission::getNomMission()
{
    return this->nomMission;
}

/**
 * \brief Mutateur de l'attribut nomMission
 *
 * \param nouveauNom nouveau nom de l'Mission
 */
void Mission::setMission(std::string nouveauNom){
    this->nomMission = nouveauNom;
}

/**
 * \brief Accesseur de l'attribut villeMission
 * 
 * \return Nom de l'Mission
 */
std::string Mission::getVilleMission() {
    return this->villeMission;
}


/**
 * \brief Mutateur de l'attribut villeMission
 * 
 * \param nouvelleVille nouvelle ville de l'Mission
 */
void  Mission::setVilleMission(std::string nouvelleVille) {
    this->villeMission = nouvelleVille;
}
