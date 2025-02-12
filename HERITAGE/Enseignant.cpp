#include "Enseignant.h"
#include <string>
#include <iostream>

using namespace std;
using namespace individu;

Enseignant::Enseignant()
{

}
Enseignant::~Enseignant()
{

}
void Enseignant::setMat(std::string m)
{
    matiere = m;
}
string Enseignant::getMat()
{
    return (matiere);
}
void Enseignant::afficher()
{
    cout << "- " << getName() << " , " << getMat() << endl;

}