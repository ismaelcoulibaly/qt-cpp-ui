#include "Produit.h"
#include "Fournisseur.h"
#include <iostream>
#include <string>

Produit::Produit(Fournisseur *fournisseur, const string &nom, int reference, double prix)
    : fournisseur_(fournisseur),
      nom_(nom),
      reference_(reference),
      prix_(prix)
{
    if (fournisseur_ != nullptr)
        fournisseur_->ajouterProduit(this);
}

string Produit::obtenirNom() const
{
    return nom_;
}

int Produit::obtenirReference() const
{
    return reference_;
}

double Produit::obtenirPrix() const
{
    return prix_;
}

Fournisseur *Produit::obtenirFournisseur() const
{
    return fournisseur_;
}

void Produit::afficher() const
{
    cout << "\t" << nom_ << endl
         << "\t\treference:\t" << reference_ << endl
         << "\t\tprix:\t\t" << "$" << prix_ << endl;
    if (fournisseur_ != nullptr)
        cout << "\t\tfournisseur:\t" << fournisseur_->obtenirNom() << endl;
}

void Produit::modifierNom(const string &nom)
{
    nom_ = nom;
}

void Produit::modifierReference(int reference)
{
    reference_ = reference;
}

void Produit::modifierPrix(double prix)
{
    prix_ = prix;
}

void Produit::modifierFournisseur(Fournisseur *fournisseur)
{
    fournisseur_ = fournisseur;
}
