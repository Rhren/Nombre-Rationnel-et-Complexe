#include "function.h"


void info(Etablissement etab)
{
    cout << "=======Information de l'establissement======== " << endl;
    cout << " .Nom: " << etab.getName() << endl;
    cout << " .date de sa creation: " << etab.getDate() << endl;
    cout << "Liste des etudiants: " << endl;
    etab.listeEtudiant();
    cout << "Liste des enseignants: " << endl;
    etab.listeEnseignant();
}
void info(Hopital hospi)
{
    Medecin med;
    cout << "=======Information de l'hopital======== " << endl;
    cout << " .Liste medecins: " << endl;
    hospi.affichage();
    cout << " .date de sa creation: " << hospi.getDate() << endl;

}
void function()
{
    
    Etablissement Etab;
    Etudiant e1,e2;
    Enseignant prof1;
    Medecin med1;
    Hopital hospital;

    Etab.SetName("MIT");
    Etab.setDate("13-12-1990");

    e1.setGrade("L1");
    e2.setGrade("L2");
    e2.setName("Koto");
    e1.setName("Joh");
    
    Etab.ajouter_etudiant(e2);
    Etab.ajouter_etudiant(e1);
    
    prof1.setName("Mr Tahiry");
    prof1.setMat("POO");
    Etab.ajouter_enseignant(prof1);
    
    info(Etab);

    hospital.setDate("12-01-1990");
    med1.setName("Dr Rasoa");
    med1.setSpc("Generaliste");
    hospital.ajouter_medecin(med1);
    info(hospital);
}
