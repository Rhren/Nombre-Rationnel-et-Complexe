#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include "Personne.h"
#include <string>


namespace individu
{
    class Enseignant:public Personne
    {
        private:
            std::string matiere;
        public:
            Enseignant();
            ~Enseignant();
            void setMat(std::string m);
            std::string getMat();
            void afficher();
    };
}
#endif