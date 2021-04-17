#include "ProduitAuxEncheres.h"

ProduitAuxEncheres::ProduitAuxEncheres(double prix)
    : Produit(),
      prixInitial_(prix),
      encherisseur_(nullptr)
{
}

ProduitAuxEncheres::ProduitAuxEncheres(Fournisseur *fournisseur, const string &nom,
                                       int reference, double prix)
    : Produit(fournisseur, nom, reference, prix),
      prixInitial_(prix),
      encherisseur_(nullptr)
{
}

double ProduitAuxEncheres::obtenirPrixInitial() const
{
    return prixInitial_;
}

Client *ProduitAuxEncheres::obtenirEncherisseur() const
{
    return encherisseur_;
}

void ProduitAuxEncheres::afficher() const
{
    Produit::afficher();
    cout << "\t\tprix initial:\t" << prixInitial_ << endl
         << "\t\tencherisseur:\t" << encherisseur_->obtenirNom() << endl;
}

void ProduitAuxEncheres::modifierPrixInitial(double prixInitial)
{
    prixInitial_ = prixInitial;
}

void ProduitAuxEncheres::modifierEncherisseur(Client *encherisseur)
{
    encherisseur_ = encherisseur;
}

void ProduitAuxEncheres::mettreAJourEnchere(Client *encherisseur, double nouveauPrix)
{
    if (encherisseur_ == encherisseur)
        return;
    prix_ = nouveauPrix;
    encherisseur->ajouterProduit(this);
    if (encherisseur_ != nullptr)
        encherisseur_->enleverProduit(this);
    encherisseur_ = encherisseur;
}
