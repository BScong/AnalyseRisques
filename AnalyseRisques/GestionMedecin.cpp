/*************************************************************************
GestionMedecin.cpp  -  Service M�tier Medecin
-------------------
d�but                : 11/04/2017
copyright            : (C) 2017 par Benoit ZHONG
e-mail               : benoit.zhong@insa-lyon.fr
*************************************************************************/

//---------- R�alisation de la classe <GestionMedecin> (fichier GestionMedecin.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
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

//----------------------------------------------------- M�thodes publiques
void GestionMedecin::ajouterAnalyse(Analyse a)
{
	analyses.push_back(a);
} //----- Fin de M�thode

void GestionMedecin::ajouterDictionnaire(Dictionnaire d)
{
	analyses.push_back(d);
} //----- Fin de M�thode

void GestionMedecin::ajouterPatient(Patient p)
{
	patients.push_back(p);
} //----- Fin de M�thode

list<Patient> GestionMedecin::getAllPatients()
{
	return patients;
} //----- Fin de M�thode

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
} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs



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

  //----------------------------------------------------- M�thodes prot�g�es

GestionMedecin::GestionMedecin()
{
}


GestionMedecin::~GestionMedecin()
{
}
