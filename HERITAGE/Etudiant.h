#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
#include "Etablissement.h"
#include "Personne.h"

namespace individu
{
    class Etudiant:public Personne
    {
        private:
            std::string grade;
            int numero;
        public:
            Etudiant();
            ~Etudiant();
            void setGrade(std::string g);
            std::string getGrade();
            void setNum(int n);
            int getNum();
            void afficher();
    };
}

#endif
