#ifndef GESTIONNAIRE_H
#define GESTIONNAIRE_H

#include <vector>
#include "Usager.h"
#include "Client.h"

#include <QObject>

using namespace std;

class Gestionnaire: public QObject
{
    Q_OBJECT

  public:
    vector<Usager*> obtenirUsagers() const;
    int obtenirNombreUsager() const;
    Usager* obtenirUsager(int index);

    /*À Implementer*/
    void ajouterUsager(Usager* usager);
    /*À Implementer*/
    void supprimerUsager(Usager* usager);

signals:
    void usagerAjoute(Usager* usager);
    void usagerSupprime(Usager* usager);

  private:
    vector<Usager*> usagers_;
};

#endif
