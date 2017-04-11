/*************************************************************************
GestionMedecin.h  -  Service Métier Medecin
-------------------
début                : 11/04/2017
copyright            : (C) 2017 par Benoit ZHONG
e-mail               : benoit.zhong@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <GestionMedecin> (fichier GestionMedecin.h) ----------------
#if ! defined ( GESTIONMEDECIN_H )
#define GESTIONMEDECIN_H

//--------------------------------------------------- Interfaces utilisées
#include <list>
#include "Analyse.h"
#include "Dictionnaire.h"
#include "Patient.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <GestionMedecin>
// Service métier de l'application Client.
//
//------------------------------------------------------------------------

class GestionMedecin
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- Méthodes publiques
	// type Méthode ( liste des paramètres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	void ajouterPatient(Patient p);
	void ajouterDictionnaire(Dictionnaire d);
	void ajouterAnalyse(Analyse a);
	Patient rechercherPatient(long numSS);
	list<Patient> getAllPatients();

	//------------------------------------------------- Surcharge d'opérateurs

	//-------------------------------------------- Constructeurs - destructeur
	GestionMedecin(const GestionMedecin & unGestionMedecin);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	GestionMedecin(list<Analyse> a, list<Dictionnaire> d, list<Patient> p);
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~GestionMedecin();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- Méthodes protégées

	//----------------------------------------------------- Attributs protégés
	list<Analyse> analyses;
	list<Dictionnaire> dicos;
	list<Patient> patients;
};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // GESTIONMEDECIN_H

