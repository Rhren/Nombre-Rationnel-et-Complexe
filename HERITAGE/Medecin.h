#ifndef MEDECIN_H
#define MEDECIN_H
#include <string>
#include <vector>
#include "Personne.h"

namespace individu
{
    class Medecin:public Personne
    {
        public:
            
            Medecin();
            ~Medecin();
            std::string specialite;
            void setSpc(std::string spc);
            std::string getSpc();
            void afficher();
            
    };
}

#endif