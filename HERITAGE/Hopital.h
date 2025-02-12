#ifndef HOPITAL_H
#define HOPITAL_H
#include <vector>
#include "Medecin.h"
#include "Infrastructure.h"

namespace batiment
{
    using  namespace individu;
    class Hopital:public Infrastructure
    {
        public:
            std::vector<Medecin> medecins;
            Hopital();
            ~Hopital();
            void ajouter_medecin(Medecin med);
            std::vector<Medecin> getMedecins();
            void affichage();
    };

}
#endif
