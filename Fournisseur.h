#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include <string>
#include <vector>
#include "Usager.h"

using namespace std;

class Fournisseur : public Usager
{
  public:
    Fournisseur();
    Fournisseur(const string &nom, const string &prenom, int identifiant, const string &codePostal);  
};

#endif
