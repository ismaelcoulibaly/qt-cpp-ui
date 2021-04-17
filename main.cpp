#include "mainwindow.h"
#include "ClientPremium.h"
#include "Fournisseur.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Gestionnaire poly;
        Client ratus;
        Client gaspard("Donada--Vidal", "Gaspard", 11123, "P4R 1I5");
        Client rick("S", "Rick", 8435174, "HF1 8H3");
        ClientPremium marou;
        ClientPremium julie("Cash", "Julie", 1126250, "HZ9 1J4", 50);
        Fournisseur mina;
        Fournisseur martine("Bellaiche", "Martine", 6845123, "H4C 8D4");
        Fournisseur samuel("Kadoury", "Samuel", 1687421, "H1G 2G4");

        poly.ajouterUsager(&gaspard);
        poly.ajouterUsager(&rick);
        poly.ajouterUsager(&martine);
        poly.ajouterUsager(&samuel);
        poly.ajouterUsager(&ratus);
        poly.ajouterUsager(&marou);
        poly.ajouterUsager(&mina);
        poly.ajouterUsager(&julie);

    QApplication a(argc, argv);
    MainWindow window(&poly);
    window.show();

    return a.exec();
}
