/*****************************************************************//**
 * \file   Entreprise.h
 * \brief  Declaration de la classe entreprise
 * 
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef ENTREPRISE_H
#define ENTREPRISE_H
#include <iostream>
#include <string>


 /*! \class Entreprise
    * \brief classe representant une entreprise. 2 attributs prives
    * 
    * Cette classe a une finalite pedagogique : 
    * \li : Rappel du C++
    * \li : commentaire avec Doxygen
    * \li : git, github
    */
class Entreprise
{

    private:
        /**
         * Membre prive nomEntreprise : contient le nom de l'entreprise
         */
        std::string nomEntreprise; 
        /**
         * Membre prive villEntreprise : contient la ville de l'entreprise
         */
        std::string villeEntreprise; 



    protected : 



    public:
        /*Classe sous forme canonique*/
        Entreprise();   
        ~Entreprise();  
        Entreprise(const Entreprise& entre); 
        Entreprise &operator = (const Entreprise& entre); 

        Entreprise(std::string nom, std::string ville); 
        std::string getNomEntreprise();
        void setEntreprise(std::string nouveauNom);
        std::string getVilleEntreprise();
        void setVilleEntreprise(std::string nouvelleVille);
       
};

#endif