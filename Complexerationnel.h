#ifndef COMPLEXERATIONNEL_H
#define COMPLEXERATIONNEL_H

#include "Rationnel.h"
#include <string>
class Complexerationnel
{
    private:
        Rationnel reel , im;
    public:
        Complexerationnel();
        ~Complexerationnel();
        Rationnel getReel();
        Rationnel getIm();
        void setIm(int n,int d);
        void setReel(int n,int d);
        Complexerationnel addition(Complexerationnel &C2);
        void afficher(std::string op,Complexerationnel &C2,Complexerationnel &S);
        void setValeur();
};

#endif
