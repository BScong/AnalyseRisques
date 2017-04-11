/*************************************************************************
GestionMedecin.cpp  -  Service Métier Medecin
-------------------
début                : 11/04/2017
copyright            : (C) 2017 par Benoit ZHONG
e-mail               : benoit.zhong@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe <GestionMedecin> (fichier GestionMedecin.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <list>

//------------------------------------------------------ Include personnel
#include "GestionMedecin.h"
#include "Analyse.h"
#include "Dictionnaire.h"
#include "Patient.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void GestionMedecin::ajouterAnalyse(Analyse a)
{
	analyses.push_back(a);
} //----- Fin de Méthode

void GestionMedecin::ajouterDictionnaire(Dictionnaire d)
{
	analyses.push_back(d);
} //----- Fin de Méthode

void GestionMedecin::ajouterPatient(Patient p)
{
	patients.push_back(p);
} //----- Fin de Méthode

list<Patient> GestionMedecin::getAllPatients()
{
	return patients;
} //----- Fin de Méthode

Patient GestionMedecin::rechercherPatient(long numSS)
{
	Patient p;
	for (std::list<Patient>::iterator it = patients.begin(); it != patients.end(); it++)
	{
		if (*it.getNumSS() == numSS)
		{
			return *it;
		}
	}
	return NULL;
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs



  //-------------------------------------------- Constructeurs - destructeur
GestionMedecin::GestionMedecin(const GestionMedecin & unGestionMedecin)
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <GestionMedecin>" << endl;
#endif
} //----- Fin de GestionMedecin (constructeur de copie)


GestionMedecin::GestionMedecin(list<Analyse> a, list<Dictionnaire> d, list<Patient> p)
{
#ifdef MAP
	cout << "Appel au constructeur de <GestionMedecin>" << endl;
#endif
	analyses = a;
	dicos = d;
	patients = p;
} //----- Fin de GestionMedecin


GestionMedecin::~GestionMedecin()
{
#ifdef MAP
	cout << "Appel au destructeur de <GestionMedecin>" << endl;
#endif
} //----- Fin de ~GestionMedecin


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- Méthodes protégées

GestionMedecin::GestionMedecin()
{
}


GestionMedecin::~GestionMedecin()
{
}
