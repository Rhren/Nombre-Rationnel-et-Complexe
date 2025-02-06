#include "Rationnel.h"
#include <string>
class Complexerationnel
{
    private:
        Rationnel reel , im;
    public:
        Complexerationnel();
        ~Complexerationnel();
        Complexerationnel addition(Complexerationnel &C2);
        void afficher(std::string op,Complexerationnel &C2,Complexerationnel &S);
        void setValeur();
};