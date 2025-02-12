#include "Medecin.h"
#include <string>
#include <iostream>
using namespace individu;
using namespace std;

Medecin::Medecin()
{

}
Medecin::~Medecin()
{

}
void Medecin::setSpc(string spc)
{
    specialite = spc;
}
string Medecin::getSpc()
{
    return (specialite);
}
void Medecin::afficher()
{
    cout << "- " << getName() << ", spc: " << getSpc() << endl;
}