#ifndef ETABLISSEMENT_H
#define ETABLISSEMENT_H
#include <vector>
#include "Etudiant.h"
#include "Enseignant.h"
#include "Infrastructure.h"

using namespace individu;
using namespace std;

namespace individu 
{
    class Etudiant;    // Déclaration anticipée
    class Enseignant;  // Déclaration anticipée
}
namespace batiment
{
    class Etablissement:public Infrastructure
    {
        
            std::string name;
            vector<Etudiant> student;
            vector<Enseignant> teacher;
            int nbr_eleve;
        public:
            Etablissement();
            ~Etablissement();
        
            void SetName(std::string n);
            std::string getName();
            void ajouter_etudiant(Etudiant etu);
            void ajouter_enseignant(Enseignant ens);
            void listeEtudiant();
            void listeEnseignant();
    };
}
#endif
