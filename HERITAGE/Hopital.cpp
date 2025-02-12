#include "Medecin.h"
#include "Hopital.h"
#include <iostream>
#include <vector>

using namespace std;
using namespace batiment;

Hopital::Hopital()
{

}
Hopital::~Hopital()
{

}
void Hopital::ajouter_medecin(Medecin med)
{
    medecins.push_back(med);
}
vector<Medecin> Hopital::getMedecins()
{
    return(medecins);
}
void Hopital::affichage()
{
    for(Medecin medecin : medecins)
    {
        medecin.afficher();
    }
}