#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QLineEdit>
#include <QRadioButton>
#include <QPushButton>

#include <list>
#include "Gestionnaire.h"
#include "Usager.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    explicit MainWindow(Gestionnaire* gestionnaire, QWidget *parent = 0);
    ~MainWindow();

public slots:

    void filtrerListe(int);
    void selectionnerUsager(QListWidgetItem*);
    void nettoyerVue();
    void changerTypeUsager(int);
    void supprimerTousLesUsagers();
    void supprimerUsagerSelectionne();
    void ajouterUsager();
    void usagerAEteAjoute(Usager*);
    void usagerAEteSupprime(Usager*);

private:
    // Fonctions Locales

    void setup();
    void setConnections();
    void setMenu();
    void setUI();
    void afficherMessage(QString msg);
    void chargerUsagers();
    bool filtrerMasque(Usager* usager);
    //void verifierEntrees();

    // Attributs Locals

    Gestionnaire* gestionnaire_;
    vector<Usager*> ajoute_;
    int indexCourantDuFiltre_;

    // Attributs Locals QObjects

    QListWidget* listUsager;

    QLineEdit* editeurNom;
    QLineEdit* editeurPrenom;
    QLineEdit* editeurIdentifiant;
    QLineEdit* editeurCodePostal;
    QLineEdit* editeurJoursRestants;

    list<QRadioButton*> boutonRadioTypeUsager;

    QPushButton* boutonAjouter;
    QPushButton* boutonSupprimer;
};

#endif // MAINWINDOW_H
