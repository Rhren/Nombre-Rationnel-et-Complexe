#include "Etablissement.h"
#include <string>
#include "Etudiant.h"
#include "Enseignant.h"

using namespace batiment;
using namespace std;
using namespace individu;

Etablissement::Etablissement()
{

}
Etablissement::~Etablissement()
{

}
void Etablissement::SetName(string n)
{
    name = n;
}
string Etablissement::getName()
{
    return (name);
}
void Etablissement::ajouter_etudiant(Etudiant etu)
{
    student.push_back(etu);

}
void Etablissement::ajouter_enseignant(Enseignant ens)
{
    teacher.push_back(ens);

}
void Etablissement::listeEtudiant()
{
    for(Etudiant etu : student)
    {
        etu.afficher();
    }

}
void Etablissement::listeEnseignant()
{
    for(Enseignant ens : teacher)
    {
        ens.afficher();
    }

}