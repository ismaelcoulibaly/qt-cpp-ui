#include <algorithm>
#include "Gestionnaire.h"

vector<Usager *> Gestionnaire::obtenirUsagers() const
{
    return usagers_;
}

int Gestionnaire::obtenirNombreUsager() const
{
    return usagers_.size();
}

Usager* Gestionnaire::obtenirUsager(int index)
{
    return usagers_.at(index);
}

void Gestionnaire::ajouterUsager(Usager* usager)
{
    for (unsigned int i = 0; i < usagers_.size(); i++)
        if (usagers_[i] == usager)
            return;
    usagers_.push_back(usager);
    emit usagerAjoute(usager);
}

void Gestionnaire::supprimerUsager(Usager* usager)
{
    auto it = find(usagers_.begin(), usagers_.end(), usager);

    if (it != usagers_.end()) {
        Usager* u = *it;
        usagers_.erase(it);
        emit usagerSupprime(u);
    }
}
