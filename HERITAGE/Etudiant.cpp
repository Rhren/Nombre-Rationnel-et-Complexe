#include "Etudiant.h"
#include <string>
#include <iostream>

using namespace std;
individu::Etudiant::Etudiant()
{

}
individu::Etudiant::~Etudiant()
{

}
void individu::Etudiant::setGrade(std::string g)
{
    grade = g;
}
string individu::Etudiant::getGrade()
{
    return (grade);
}
void individu::Etudiant::afficher()
{
    cout << "- " << getName() << " , " << getGrade() << endl;
}