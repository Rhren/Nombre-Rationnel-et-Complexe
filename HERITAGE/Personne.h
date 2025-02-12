#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>

namespace individu
{
    class Personne
    {
        protected: 
            std::string name;
        public:
            Personne();
            ~Personne();
            void setName(std::string nom);
            std::string getName();

    };
}
#endif