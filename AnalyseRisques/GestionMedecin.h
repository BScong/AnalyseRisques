/*************************************************************************
GestionMedecin.h  -  Service M�tier Medecin
-------------------
d�but                : 11/04/2017
copyright            : (C) 2017 par Benoit ZHONG
e-mail               : benoit.zhong@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <GestionMedecin> (fichier GestionMedecin.h) ----------------
#if ! defined ( GESTIONMEDECIN_H )
#define GESTIONMEDECIN_H

//--------------------------------------------------- Interfaces utilis�es
#include <list>
#include "Analyse.h"
#include "Dictionnaire.h"
#include "Patient.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <GestionMedecin>
// Service m�tier de l'application Client.
//
//------------------------------------------------------------------------

class GestionMedecin
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste des param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	void ajouterPatient(Patient p);
	void ajouterDictionnaire(Dictionnaire d);
	void ajouterAnalyse(Analyse a);
	Patient rechercherPatient(long numSS);
	list<Patient> getAllPatients();

	//------------------------------------------------- Surcharge d'op�rateurs

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
	//----------------------------------------------------- M�thodes prot�g�es

	//----------------------------------------------------- Attributs prot�g�s
	list<Analyse> analyses;
	list<Dictionnaire> dicos;
	list<Patient> patients;
};

//-------------------------------- Autres d�finitions d�pendantes de <Xxx>

#endif // GESTIONMEDECIN_H

